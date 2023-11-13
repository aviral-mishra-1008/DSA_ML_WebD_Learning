//Global Variables - No Window!!!

//__dirname -> path to current directory
//__filename -> file name
//require -> function to use module
//module -> info about current module (file)
//process -> info about env where program is being executed

console.log(__dirname);
//setTimeout
//setInterval is also there in node

//setInterval executes the required code once every specified time
setInterval(()=>{
    console.log('Wow')
},1000)