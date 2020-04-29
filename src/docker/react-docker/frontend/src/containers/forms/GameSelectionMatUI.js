import React from 'react';
import {withRouter} from 'react-router';
import AppBar from '@material-ui/core/AppBar';
import Button from '@material-ui/core/Button';
import CameraIcon from '@material-ui/icons/PhotoCamera';
import Card from '@material-ui/core/Card';
import CardActions from '@material-ui/core/CardActions';
import CardContent from '@material-ui/core/CardContent';
import CardMedia from '@material-ui/core/CardMedia';
import CssBaseline from '@material-ui/core/CssBaseline';
import Grid from '@material-ui/core/Grid';
import Toolbar from '@material-ui/core/Toolbar';
import Typography from '@material-ui/core/Typography';
import {makeStyles} from '@material-ui/core/styles';
import Container from '@material-ui/core/Container';
import Link from '@material-ui/core/Link';
import axios from 'axios';

class GameSelectionMatUI extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      games: [],
    };
  }
  async componentDidMount() {
    const games = await axios.get(`/d/game/available/`)
        .then((res) => {
          const games_response = res.data;
          const games = games_response.map(async function(game) {
            const gamestate = await axios.get('/d/game/' + game.id + '/state/').then((res) => {
              if (res.status === 200) {
                const gamestate = res.data;
                game.gamestate = gamestate;
                return game;
              }
            });
            return gamestate;
          });
          return Promise.all(games);
        });
    this.setState({
      games: games,
    });
  }
  handleStartGame(game) {
    if (game.player_2 === null) {
      alert('Waiting on player 2!');
    } else {
      this.setState({
        game: game,
      });
      this.props.history.push({
        pathname: '/playgame/' + game.id,
        state: {
          game: game,
        },
      });
    }
  }

  Copyright() {
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

  useStyles() {
    makeStyles((theme) => ({
      icon: {
        marginRight: theme.spacing(2),
      },
      heroContent: {
        backgroundColor: theme.palette.background.paper,
        padding: theme.spacing(8, 0, 6),
      },
      heroButtons: {
        marginTop: theme.spacing(4),
      },
      cardGrid: {
        paddingTop: theme.spacing(8),
        paddingBottom: theme.spacing(8),
      },
      card: {
        height: '100%',
        display: 'flex',
        flexDirection: 'column',
      },
      cardMedia: {
        paddingTop: '56.25%', // 16:9
      },
      cardContent: {
        flexGrow: 1,
      },
      footer: {
        backgroundColor: theme.palette.background.paper,
        padding: theme.spacing(6),
      },
    }));
  }
  classes() {
    this.useStyles();
  }


  render() {
    const cards = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12];

    return (
      <React.Fragment>
        <CssBaseline />
        <AppBar position="relative">
          <Toolbar>
            <CameraIcon className={this.classes.icon} />
            <Typography variant="h6" color="inherit" noWrap>
      You good?
            </Typography>
          </Toolbar>
        </AppBar>
        <main>
          {/* Hero unit */}
          <div className={this.classes.heroContent}>
            <Container maxWidth="sm">
              <Typography component="h1" variant="h2" align="center" color="textPrimary" gutterBottom>
      Yerp
              </Typography>
              <Typography variant="h5" align="center" color="textSecondary" paragraph>
      Tic Tac Toe is a fun game to play with others! Hooray!
              </Typography>
              <div className={this.classes.heroButtons}>
                <Grid container spacing={2} justify="center">
                  <Grid item>
                    <Button variant="contained" color="primary">
      Click This Button
                    </Button>
                  </Grid>
                  <Grid item>
                    <Button variant="outlined" color="primary">
      Don't Click This Button
                    </Button>
                  </Grid>
                </Grid>
              </div>
            </Container>
          </div>
          <Container className={this.classes.cardGrid} maxWidth="md">
            {/* End hero unit */}
            <Grid container spacing={4}>
              {this.state.games.map((game) => (
                <Grid item key={game.id} xs={12} sm={6} md={4}>
                  <Card className={this.classes.card}>
                    <CardMedia
                      className={this.classes.cardMedia}
                      image="https://source.unsplash.com/random"
                      title="Image title"
                    />
                    <CardContent className={this.classes.cardContent}>
                      <Typography gutterBottom variant="h5" component="h2">
                        {game.gamestate.player1} vs. {game.gamestate.player2}
                      </Typography>
                      <Typography>
                        {window.location.protocol}//{window.location.host}/playgame/{game.id}
                      </Typography>
                    </CardContent>
                    <CardActions>
                      <Button size="large" color="primary" onClick = {
                        () => this.handleStartGame(game)
                      }>
        Play
                      </Button>
                    </CardActions>
                  </Card>
                </Grid>
              ))}
            </Grid>
          </Container>
        </main>
        {/* Footer */}
        <footer className={this.classes.footer}>
          <Typography variant="h6" align="center" gutterBottom>
      Footer
          </Typography>
          <Typography variant="subtitle1" align="center" color="textSecondary" component="p">
      Something here to give the footer a purpose!
          </Typography>
          <this.Copyright />
        </footer>
        {/* End footer */}
      </React.Fragment>
    );
  }
}
export default withRouter(GameSelectionMatUI);
