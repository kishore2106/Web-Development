import express from "express";
import axios from "axios";

const app = express();
const port = 3001;
const API_URL = "https://secrets-api.appbrewery.com/";

//TODO 1: Fill in your values for the 3 types of auth.
const yourUsername = "kishore021";
const yourPassword = "123";
const yourAPIKey = "1c85fd98-0519-4034-857a-d13f5666cff4";
const yourBearerToken = "6dbbe811-b8b6-4d83-8892-c9205ccd6c61";

app.get("/", (req, res) => {
  res.render("index.ejs", { content: "API Response." });
});

app.get("/noAuth", async (req, res) => {
  //TODO 2: Use axios to hit up the /random endpoint
  const response = await axios.get(`${API_URL}random`);
  console.log(response.data);
  var responseString = JSON.stringify(response.data);
  //The data you get back should be sent to the ejs file as "content"
  res.render("index.ejs", {result: responseString});
  //Hint: make sure you use JSON.stringify to turn the JS object from axios into a string.
});

app.get("/basicAuth", async (req, res) => {
  //TODO 3: Write your code here to hit up the /all endpoint
  //Specify that you only want the secrets from page 2
  //HINT: This is how you can use axios to do basic auth:
  // https://stackoverflow.com/a/74632908
  /*
   axios.get(URL, {
      auth: {
        username: "abc",
        password: "123",
      },
    });
  */
  const response = await axios.get(`${API_URL}all?_page=2`, {
    auth: {
      username: yourUsername,
      password: yourPassword,
    }
  });
  console.log(response.data);
  const result = JSON.stringify(response.data);
  res.render("index.ejs", {result: result});
});

app.get("/apiKey", async (req, res) => {
  //TODO 4: Write your code here to hit up the /filter endpoint
  const response = await axios.get(`${API_URL}filter?score=5&apiKey=${yourAPIKey}`);
  console.log("response" + JSON.stringify(response.data));
  const result = JSON.stringify(response.data);
  res.render("index.ejs", {result: result});
  //Filter for all secrets with an embarassment score of 5 or greater
  //HINT: You need to provide a query parameter of apiKey in the request.
});

app.get("/bearerToken", async (req, res) => {
  //TODO 5: Write your code here to hit up the /secrets/{id} endpoint
  //and get the secret with id of 42
  //HINT: This is how you can use axios to do bearer token auth:
  // https://stackoverflow.com/a/52645402
  /*
  axios.get(URL, {
    headers: { 
      Authorization: `Bearer <YOUR TOKEN HERE>` 
    },
  });
  */
 const id = 42;
 const response = await axios.get(`${API_URL}secrets/${id}`,{
  headers: {
    Authorization: `Bearer ${yourBearerToken}`,
  }
 });
 const result = JSON.stringify(response.data);
 res.render("index.ejs", {result: result});
});

app.listen(port, () => {
  console.log(`Server is running on port ${port}`);
});
