	var http= require('http');
http.createServer(function(req, res){
	res.writeHead(200, {'Content-Type': 'text/plain'});
	res.end('Cursito Rapido de 15 dias de Node.js\n');


}).listen(1337, "127.0.0.1");
console.log('Server is Running at http://127.0.0.1:1337/');

/*Se analizo todo acerca de REPL, y la interaccion es util desde mi punto de vista para :

*Testear fragmentos de código, 
*Revisar las funciones y librerias poco documentadas.
posee cosas interesantes como son los atajos y la opcion de almacenar los datos en modo interactivos
para revisar escribir .help en el directorio.

*/