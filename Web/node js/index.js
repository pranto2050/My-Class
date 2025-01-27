const http = require('http');




// add more functions
const port="8080";

const server =http.createServer((req, res) => {
    res.end("my first server started");
});
server.listen(8080,()=>{
    console.log(port);
})
