import express from 'express';
import morgan from 'morgan';
import bodyParser from 'body-parser';

const app = new express();
const PORT = 3000;

app.use(bodyParser.urlencoded({ extended: true }));
app.use(morgan("combined"));

app.get("/", (req, res) => {
    res.render("index.ejs");
});

app.post("/submit", (req, res) => {
    const nameLen = req.body['fName'].length + req.body['lName'].length;
    console.log(nameLen);
    res.render("index.ejs", { nameLen : nameLen });
});

app.listen(PORT, () => {
    console.log(`Server running on port ${PORT}`);
});
