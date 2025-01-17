import express from 'express';
import morgan from 'morgan';
import { dirname } from "path";
import { fileURLToPath } from "url";
import bodyParser from "body-parser";

const app = express();
const __dirname = dirname(fileURLToPath(import.meta.url));
const PORT = 3000;

app.use(morgan("combined"));
app.use(bodyParser.urlencoded({ extended: true }));

app.get("/", (req, res) => {
    const d = new Date();
    let day = d.getDay();
    if (day === 0 || day === 6) {
        res.render("index.ejs", { weekday: "weekend", task: "have fun" });
    } else {
        res.render("index.ejs", { weekday: "weekday", task: "work hard"});
    }
});

app.listen(PORT, () => {
    console.log(`Server running on port ${PORT}`);
});
