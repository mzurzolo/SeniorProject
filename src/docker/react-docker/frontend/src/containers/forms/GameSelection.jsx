import React, {useState} from 'react';
import {useHistory} from 'react-router-dom';
import axios from 'axios';
import {withRouter} from 'react-router';
import Button from '@material-ui/core/Button';
import Card from '@material-ui/core/Card';
import CardActions from '@material-ui/core/CardActions';
import CardContent from '@material-ui/core/CardContent';
import CardMedia from '@material-ui/core/CardMedia';
import CssBaseline from '@material-ui/core/CssBaseline';
import Grid from '@material-ui/core/Grid';
import Typography from '@material-ui/core/Typography';
import {makeStyles} from '@material-ui/core/styles';
import Container from '@material-ui/core/Container';
import './GameSelection.css';
import GameDescription from '../media/GameDescription';

class GameSelection extends React.Component {
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
        pathname: '/Game',
        state: {
          game: game,
        },
      });
    }
  }
  useStyles() {
    makeStyles((theme) => ({
      icon: {
        marginRight: theme.spacing(2),
      },
      heroContent: {
        backgroundColor: theme.palette.background.paper,
        display:'flex',
      },
      heroButtons: {
        marginTop: theme.spacing(5),
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
        fontSize: '50px',
        font: 'Arial',
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
    return (
      <React.Fragment>
      <CssBaseline />
      <div id='gamelist'>
      <CssBaseline />
      
    <Container className={this.classes.cardGrid} maxWidth="sm" align="center">
            {/* End hero unit */}
            <Grid container spacing={5} justify="center">
              {this.state.games.map((game) => (
                <Grid item key={game.id} xs={0} sm={0} md={0}>
                  <Card className={this.classes.card}>
                    <CardMedia
                      className={this.classes.cardMedia}
                      image="https://source.unsplash.com/random"
                      title="Image title"
                    />
                    <CardContent className={this.classes.cardContent}>
                      <Typography class='allthecards' gutterBottom variant="h5" component="h2">
                        {game.gamestate.player1} vs. {game.gamestate.player2}
                      </Typography>
                      <Typography class='invasiontext'>
                        {window.location.protocol}//{window.location.host}/playgame/{game.id}
                      </Typography>
                    </CardContent>
                    <CardActions>
                      <Button class='playbuttontext' size="large" color="primary" onClick = {
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
          </div>

          </React.Fragment>
    );
  }
}


export default withRouter(GameSelection);
/*
  render() {
    return ( <div id = 'gamelist' > {
        this.state.games.map((game) => (<div key = {game.id}>
          <Button onClick = {
            () => this.handleStartGame(game)
            } > {
              game.gamestate.player1
            } vs. {game.gamestate.player2} -- {game.id.substring(0, 4)}
            </Button> 
            </div >))
      } </div>
    );
  }
}
*/
