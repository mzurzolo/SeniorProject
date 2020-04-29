import React, {useState} from 'react';
import {useHistory} from 'react-router-dom';
import Avatar from '@material-ui/core/Avatar';
import Button from '@material-ui/core/Button';
import CssBaseline from '@material-ui/core/CssBaseline';
import TextField from '@material-ui/core/TextField';
import FormControlLabel from '@material-ui/core/FormControlLabel';
import Checkbox from '@material-ui/core/Checkbox';
import Link from '@material-ui/core/Link';
import Grid from '@material-ui/core/Grid';
import Box from '@material-ui/core/Box';
import LockOutlinedIcon from '@material-ui/icons/LockOutlined';
import Typography from '@material-ui/core/Typography';
import {makeStyles} from '@material-ui/core/styles';
import Container from '@material-ui/core/Container';
import axios from 'axios';
import {Route, BrowserRouter as Router} from 'react-router-dom';
import {Link as RouterLink} from 'react-router-dom';

function Copyright() {
  return (
    <Typography variant="body2" color="textSecondary" align="center">
      {'Copyright © '}
      <Link color="inherit" href="https://material-ui.com/">
        Your Website
      </Link>{' '}
      {new Date().getFullYear()}
      {'.'}
    </Typography>
  );
}

const useStyles = makeStyles((theme) => ({
  paper: {
    marginTop: theme.spacing(8),
    display: 'flex',
    flexDirection: 'column',
    alignItems: 'center',
  },
  avatar: {
    margin: theme.spacing(1),
    backgroundColor: theme.palette.secondary.main,
  },
  form: {
    width: '100%', // Fix IE 11 issue.
    marginTop: theme.spacing(3),
  },
  submit: {
    margin: theme.spacing(3, 0, 2),
  },
}));

export default function SignUpMatUI(props) {
  const classes = useStyles();
  const history = useHistory();
  const [user, setUser] = useState('');
  const [email, setEmail] = useState('');
  const [email2, setEmail2] = useState('');
  const [password, setPassword] = useState('');
  const [password2, setPassword2] = useState('');
  const [fname, setfname] = useState('');
  const [lname, setlname] = useState('');

  function handleSubmit(event) {
    event.preventDefault();
    userPost();
  }

  function confirmPasswordMatch() {
    if (password !== password2) {
      return false;
    } else {
      return true;
    }
  }

  function confirmEmailMatch() {
    if (email !== email2) {
      return false;
    } else {
      return true;
    }
  }

  function userPost() {
    // Validate the email and password
    if (!confirmEmailMatch()) {
      alert('Invalid request! \n Emails do not match');
      return false;
    } else if (!confirmPasswordMatch()) {
      alert('Invalid request! \n Passwords do not match');
      return false;
    }

    // Call post to create a new user
    axios.post('/d/acct/register/', {
      username: user,
      email: email,
      password1: password,
      password2: password2,
    }).then(function(response) {
      // If successful response (201)
      if (response.status === 201) {
        axios.patch('/d/acct/profile/', {
          username: user,
          first_name: fname,
          last_name: lname,
        }).then(function(res) {
          if (res.status === 200) {
            alert('Success! Your account has been created');
            history.push('/Dashboard');
          }
        }).catch(function(error) {
          alert('Invalid request! \n' + error);
          window.location.reload();
        });
      }
    }).catch(function(error) {
      alert('Invalid request! \n' + error);
      window.location.reload();
    });
  }

  return (
    <Container component="main" maxWidth="xs">
      <CssBaseline />
      <div className={classes.paper}>
        <Avatar className={classes.avatar}>
          <LockOutlinedIcon />
        </Avatar>
        <Typography component="h1" variant="h5">
          Sign up
        </Typography>
        <form className={classes.form} noValidate onSubmit={handleSubmit}>
          <Grid container spacing={2}>
            <Grid item xs={12} sm={6}>
              <TextField
                autoComplete="fname"
                name="firstName"
                variant="outlined"
                required
                fullWidth
                id="firstName"
                label="First Name"
                autoFocus
                onChange={(e) => setfname(e.target.value)}
              />
            </Grid>
            <Grid item xs={12} sm={6}>
              <TextField
                variant="outlined"
                required
                fullWidth
                id="lastName"
                label="Last Name"
                name="lastName"
                autoComplete="lname"
                onChange={(e) => setlname(e.target.value)}
              />
            </Grid>
            <Grid item xs={12} sm={6}>
              <TextField
                variant="outlined"
                required
                fullWidth
                id="user"
                label="username"
                name="username"
                autoComplete="user"
                onChange={(e) => setUser(e.target.value)}
              />
            </Grid>
            <Grid item xs={12}>
              <TextField
                variant="outlined"
                required
                fullWidth
                id="email"
                label="Email Address"
                name="email"
                autoComplete="email"
                onChange={(e) => setEmail(e.target.value)}
              />
            </Grid>
            <Grid item xs={12}>
              <TextField
                variant="outlined"
                required
                fullWidth
                id="email2"
                label="Confirm Email Address"
                name="email2"
                autoComplete="email"
                onChange={(e) => setEmail2(e.target.value)}
              />
            </Grid>
            <Grid item xs={12}>
              <TextField
                variant="outlined"
                required
                fullWidth
                name="password"
                label="Password"
                type="password"
                id="password"
                autoComplete="current-password"
                onChange={(e) => setPassword(e.target.value)}
              />
            </Grid>
            <Grid item xs={12}>
              <TextField
                variant="outlined"
                required
                fullWidth
                name="password2"
                label="Password2"
                type="password"
                id="password2"
                autoComplete="current-password"
                onChange={(e) => setPassword2(e.target.value)}
              />
            </Grid>
            <Grid item xs={12}>
              <FormControlLabel
                control={<Checkbox value="allowExtraEmails" color="primary" />}
                label="I want to receive inspiration, marketing promotions and updates via email."
              />
            </Grid>
          </Grid>
          <Button
            type="submit"
            fullWidth
            variant="contained"
            color="primary"
            className={classes.submit}
          >
            Sign Up
          </Button>
          <Grid container justify="flex-end">
            <Grid item>
              <Router>
                <div>
                  <Link component={RouterLink} to='/signin' href="#" variant="body2" onClick={() => history.push('/signin')}>
                Already have an account? Sign in
                  </Link>
                </div>
              </Router>
            </Grid>
          </Grid>
        </form>
      </div>
      <Box mt={5}>
        <Copyright />
      </Box>
    </Container>
  );
}
