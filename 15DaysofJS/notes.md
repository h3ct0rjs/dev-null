# Notas de JavaScript

## Algo de Historia:

Resolver muchos problemas de carga en paginas dinamicas, entendiendo pagina dinamica aquella que posee animaciones e intereaccion con el usuario, la solucion es dejar que la ejecucion del lado del usuario confiando en que los usuario no son malebolos *:)*

Brendan Eich de Netscape en ese tiempo plantea algo llamado livescript que resuelve la carga de elementos dinamicos en los navegadores, Sun se une con aportando otros desarrolladores. 

El nombre es puro marketing, originalmente se  llama Livescript pero se cambia a *JavaScript* por que la palabra de moda en el mundo informatico en ese tiempo era *Java* que conveniencia para Sun.

Microsoft *copio* la misma idea en su navegador de IE 3.0 llamado JScript.
Para evitar una guerra de tecnologias, Netscape decidio estandarizar el lenguaje, asi que se envio la especificacion javascript 1.1 a ECMA (European Computer Manufacturers Association). 

Por esto JavaScript tambien es conocido como ECMAScript por algunos desarrolladores.

*Script* se refiere a guion, aunque es mejor aceptado como script.
Se utiliza la especificacion **ECMA-262** utilizada actualmente por los navegadores segun el libro <librosweb..es/libro/javascript/capitulo_1>

E4X es  >> JavaScript + Xml.


### Inclusion de Scripts Javascript en docs Html.

**Forma 1** : Inside of html document 
Basta con incluir la etique 
```<script>Codigo JavaScript aqui.</script>```
Dentro del doc html, xhtml o sea cual sea el tipo de documento asi.
Ejemplo:
```
<html>
<head>
<meta ...lo que sea/>
<title> Aqui!</title>
<script type="text/javascript">
alert("Hello World")
console.log("Hello World in the Js Console.")
</script>-
</head>
<body>
...contenido aqui 
</body>
</html>
```
Esto presenta el inconveniente de que si el Script esta en varias paginas y deseamos realizar algun cambio se debe hacer en todas.

**Forma 2**: External of the html document.
```
<script type="text/javascript" src="pathofjsfile/jsfile.js"></script>
```
Resuelve el problema anterior al parecer mucho mejor desde el punto de vista del desarrollador.

**Forma 3**: inside the html etiquetes.

`<p onclick="alert('Hello inside the paragraph')">Texto aqui</p>`

Segun la lectura esto no es muy bueno para un buen desempeño, supongo que se apoyan en estudios practica estandar para decir esto.

Si el documento html requiere de ejecucion de JavaScript podemos lanzar un mensaje 
solicitando al usuario que active el javascript asi :
```
<body>
<noscript>
<p>La Pagina Requiere JavaScript Activado, activalo para continuar</p>
</noscript>
</body>
```

## General de JS

- Espacio en blanco, lineas nuevas son ignoradas
- Distigue entre mayusculas y minusculas.
- No es necesario definir el tipo de variable, salvo que una practica recomendada es usar la palabra reservada `var` para definir variables.
```
var edad=14;
var nombre="PepitoPerez"
```
No es necesario terminar con **;** cada linea, aunque es una practica recomendada.

los comentarios que hay son los mismos disponible en lenguajes como c++, de bloque y delinea 

**Bloque**
```/*Esto es comentario de bloque.
Esto es una linea dentro de un bloque.
Esto es otra linea..
etc..
*/
```
**Comentario de Linea**
```
//Hola 
```
Es posible que decidamos sacar popups para esto :
```
alert("Hello World!, Pop Up de mensaje.")
```
Es posible integrar Java con Javascript con un paquete denominado **javax.script.**

### Variables 
Se crean de la misma forma como se menciono antes con *var*, pueden ser para almacenar valores numericos (enteros,flotantes), cadenas de texto.

- Solo puede estar formador por letras, numeros, simbolo de $, _.
- El primer caracter de la variable no puede ser numero.

```
var dia="Martes";
var numero=4;
var numero2=33.2;
```
Los Arrays tambien son permitidos asi :
```
var dias=["lunes","martes","miercoles"..etc];
```
Para acceder a una posicion del array :`var undia1=dias[0];`


Los operadores logicos,el flujo de control es igual que en **C++**, el control de flujo igual.

[//]: # (Algunas Referencias.)


   [Codepen]: <https://codepen.io>
   [@c1b3rh4ck]: <http://twitter.com/c1b3rh4ck>
   [node.js]: <http://nodejs.org>
   [Twitter Bootstrap]: <http://twitter.github.com/bootstrap/>
   
