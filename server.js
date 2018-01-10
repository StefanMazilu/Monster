var http = require("http");

var monsterHealth = 100;

function onRequest(request, response)
{
	var url = request.url;

	var urlComponents = url.split('/');

	var query = urlComponents[1];

	console.log(query);

	response.writeHead(200, {"Content-Type": "text/plain"});

	if(query.localeCompare("attack") == 0)
	{
		console.log("TEST MESSAGE");

		var damage = 3;

		monsterHealth -= damage;

		response.write("You have damaged monster for " + damage + " damage!\n");
	}

	response.write("Monster has " + monsterHealth + " health.\n");

	response.end();
}

var server = http.createServer(onRequest);

server.listen(8888);
