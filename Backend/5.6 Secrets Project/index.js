// 1. Import express and axios
import express from 'express';
import axios from 'axios';
import bodyParser from 'body-parser';
// 2. Create an express app and set the port number.
const app = express();
const PORT = 3000;
const API_URL = "https://secrets-api.appbrewery.com/random";
app.use(bodyParser.urlencoded({ extended: true}));

// 3. Use the public folder for static files.
app.use(express.static("public"));

// 4. When the user goes to the home page it should render the index.ejs file.
// 5. Use axios to get a random secret and pass it to index.ejs to display the
// secret and the username of the secret.
app.get("/", async (req, res) => {
    try{
        const response = await axios.get(`${API_URL}`);
        console.log(response.data);
        res.render("index.ejs", { secret: response.data.secret, user: response.data.username });
    } catch(error){
        res.status(500).render("index.ejs");
    }
});

// 6. Listen on your predefined port and start the server.
app.listen(PORT, () => {
    console.log("Server running on port " + PORT);
});