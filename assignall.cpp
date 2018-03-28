/*
Server assignment1

*/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 

int main(int argc, char *argv[])
{
	int listenfd = 0, new_sockid = 0;
	struct sockaddr_in serv_addr; 


	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&serv_addr, '0', sizeof(serv_addr));
	memset(sendBuff, '0', sizeof(sendBuff)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(5000); 

	bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

	listen(listenfd, 10); 
	new_sockid = accept(listenfd, (struct sockaddr*)NULL, NULL); 
	while (1) 
	{ 
		int 1 = 0; 
		int buffer[256];
		int num;
		recv(new_sockid. &num, 4. 0);
		if (num>0)
		{
			buffer[0]=0;
			buffer[1] = 1;
			for (i=2;i<num;i++)
			{
				buffer[i]=buffer[i-1]+buffer[i+2];

			} 
			int ret = send(new_sockid, buffer, num*4, 0); 
		} 
		printf("send number ret %d\n",ret);
	}
}


/*
client assignment1

*/

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h> 

int main(int argc, char *argv[])
{
	int sersock = 0, n = 0;

	struct sockaddr_in serv_addr;     

	if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("\n Error : Could not create socket \n");
		return 1;
	} 

	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(5000); 



	if( connect(sersock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
	{
		printf("\n Error : Connect Failed \n");
		return 1;
	} 


	while (1)
	{  
		int buffer[256];//={"har1kesh"} ;
		int i;
		int num; printf("enter number\n"); 
		scanf("%d", &num); int size = send(sersock, &num, 4, 0);
		if (size < 0) 
		{ 
			printf("data write failed\n"); 
			exit(0); 
		}
		ret = recv(sersock, buffer, num * 4, 0); 
		if (ret > 0) 
		{ 
			printf("Fibonacci Number\n"); 
			for (i = 0; i < num; i++)
				printf(" %d ", buffer[1]); 
			printf("\n"); 
		}
	} 

	return 0;
}




/*
Server assignment2

*/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 

int main(int argc, char *argv[])
{
	int listenfd = 0, new_sockid = 0;
	struct sockaddr_in serv_addr; 


	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&serv_addr, '0', sizeof(serv_addr));
	memset(sendBuff, '0', sizeof(sendBuff)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(5000); 

	bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

	listen(listenfd, 10); 
	new_sockid = accept(listenfd, (struct sockaddr*)NULL, NULL); 
	while (1) 
	{ 
		int i = 0;
		int buffer[256]; 
		int num;
		recv(new_sockid, &num, 4, 0); 

		if (num > 0) 
		{ 
			int fact = 1;
			for (i = 1; i <= num;i++) 
			{
				fact = fact*i;
			}
			int ret = send(new_sockid,&fact,4,0);
			printf("Send Number ret %d\n",ret);			
		}

	}
}

/*
client assignment2

*/

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h> 

int main(int argc, char *argv[])
{
	int sersock = 0, n = 0;

	struct sockaddr_in serv_addr;     

	if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("\n Error : Could not create socket \n");
		return 1;
	} 

	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(5000); 



	if( connect(sersock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
	{
		printf("\n Error : Connect Failed \n");
		return 1;
	} 


	while (1) 
	{ 
		int buffer[256];//={"harikesh"} ;
		int i; 
		int num; 
		printf("enter number\n"); 
		scanf("%d", &num); 
		int size = send(sersock, &num, 4, 0);
		if (size < 0) 
		{
			printf("data write failed\n"); 
			exit(0);
		} 
		ret = recv(sersock, &num, 4, 0); 
		if (ret > 0) 
		{
			printf("nic number\n");
			printf(" %d ", num); 
		} 
	} 

	return 0;
}




/*
Server assignment3

*/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 

int main(int argc, char *argv[])
{
	int listenfd = 0, new_sockid = 0;
	struct sockaddr_in serv_addr; 


	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&serv_addr, '0', sizeof(serv_addr));
	memset(sendBuff, '0', sizeof(sendBuff)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(5000); 

	bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

	listen(listenfd, 10); 
	new_sockid = accept(listenfd, (struct sockaddr*)NULL, NULL); 
	while (1)
	{ 
		int num;
		char p;
		recv(new_sockid, &num, 4, 0);
		if (num > 0) 
		{ 
			if (num >= 85 && num <= 100) 
			{ 
				p = 'A';
			} else if (num >= 70 && num <= 84)
			{
				p = 'B'; 
			} else if (num >= 60 && num <= 69)
			{  
				p = 'C';
			} 
			else if (num >= 50 && num <= 59)
			{ 
				p = 'D'; 
			} else if (num >=0 && num <= 49)
			{
				p='F'; 
			} 
			else
			{
				p='N';
			} 
			int ret = send(new_sockid, &p, 1,0 );
			printf("send number ret %d\n", ret); 
		} 
	} 
}


/*
client assignment3

*/

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h> 

int main(int argc, char *argv[])
{
	int sersock = 0, n = 0;

	struct sockaddr_in serv_addr;     

	if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("\n Error : Could not create socket \n");
		return 1;
	} 

	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(5000); 



	if( connect(sersock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
	{
		printf("\n Error : Connect Failed \n");
		return 1;
	} 


	while (1)
	{
		int buffer[256];//={"harikesh"} ; 
		int i; 
		int num;
		char out;
		printf("enter number\n");
		scanf("%d", &num);
		int size = send(sersock, &num, 4, 0); 
		if (size < 9) 
		{ 
			printf("data write failed\n"); 
			exit(0);
		} 
		ret = recv(sersock, &out, 1, 0); 
		if (ret > 0)
		{ 
			printf("Grade\n"); 

			printf(" %c \n", out);
		}
	} 
	return 0;
}






/*
Server assignment5

*/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 

int main(int argc, char *argv[])
{
	int listenfd = 0, new_sockid = 0;
	struct sockaddr_in serv_addr; 


	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&serv_addr, '0', sizeof(serv_addr));
	memset(sendBuff, '0', sizeof(sendBuff)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(5000); 

	bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

	listen(listenfd, 10); 
	new_sockid = accept(listenfd, (struct sockaddr*)NULL, NULL); 
	while (1)
	{ 
		struct number { int m; int n; }; 
		struct numberout { int add;   int sub;	int multi;	int div;};

		struct number recnum;
		struct numberout out;
		recv(new_sockid, &recnum, sizeof(struct number), 0);

		out.add = recnum.m + recnum.n;
		out.sub = recnum.m - recnum.n;
		out.multi = recnum.m * recnum.n;
		out.div = recnum.m / recnum.n;
		int ret = send (new_sockid,&out,sizeof(struct numberout), 0);
		printf("Send Number ret %d\n",ret);

	} 
}


/*
client assignment5

*/

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h> 

int main(int argc, char *argv[])
{
	int sersock = 0, n = 0;
	int ret;

	struct sockaddr_in serv_addr;     

	if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("\n Error : Could not create socket \n");
		return 1;
	} 

	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(5000); 



	if( connect(sersock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
	{
		printf("\n Error : Connect Failed \n");
		return 1;
	} 


	while (1) 
	{ 
		struct number { int m; int n; }; 
		struct numberout { int add; int sub; int multi; int div; };
		struct number sendnum;
		struct numberout out; 
		printf("enter number\n"); 
		scanf("%d %d", &sendnum.m, &sendnum.n); 
		int size = send(sersock, &sendnum, sizeof(struct number), 0);
		if (size < 0)
		{ 
			printf("data write failed\n"); 
			exit(0); 
		} 
		ret = recv(sersock, &out, sizeof(struct numberout), 0);
		if (ret > 0)
		{ 
			printf("a= n+m = %d, b: n—m = %d, C: n*m : %d, d = n/m = %d \n");
		} 
	} 

	return 0;
}












/*
Server assignment6

*/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 

int main(int argc, char *argv[])
{
	int listenfd = 0, new_sockid = 0;
	struct sockaddr_in serv_addr; 


	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&serv_addr, '0', sizeof(serv_addr));
	memset(sendBuff, '0', sizeof(sendBuff)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(5000); 

	bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

	listen(listenfd, 10); 
	new_sockid = accept(listenfd, (struct sockaddr*)NULL, NULL); 
	while (1) 
	{ 
		int recnum; 
		int i;
		int j;
		char out [100] [100]; 
		rec(new_sockid,&recnum,sizeof(recnum),0);
		int newrecnum = recnum*2;
		if (recnum > 0) 
		{
			for( i=0;i<newrecnum;i++)
			{
				for( j=0;j<newrecnum;j++){
					out[i][j]=' ';
				}
			}
			for ( i = 0; i < newrecnum; i++) 
			{ 
				for (int j = i; j < newrecnum-i; j=j+2)
				{
					out[i][j] = '*'; 
				} 
			} 
			int ret = send(new_sockid,&out,sizeof(int),0);
			printf("send number ret %d\n", ret); 
		}
	} 
}


/*
client assignment6

*/

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h> 

int main(int argc, char *argv[])
{
	int sersock = 0, n = 0;

	struct sockaddr_in serv_addr;     

	if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("\n Error : Could not create socket \n");
		return 1;
	} 

	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(5000); 



	if( connect(sersock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
	{
		printf("\n Error : Connect Failed \n");
		return 1;
	} 


	while (1)
	{ 
		int sendnum;
		int i, j;
		int ret;
		int out[100][100]; 
		printf("enter number\n"); 
		scanf("%d", &sendnum); 
		int size = send(sersock, &sendnum, sizeof(int), 0);
		if (size < 0) 
		{ 
			printf("data write failed\n"); 
			exit(0);
		} 
		ret = recv(sersock, &out, sizeof(out), 0);
		if (ret > 0) 
		{ 
			for ( i = 0; 1 < sendnum*2; i++) 
			{ 
				for ( j = 0; j < sendnum*2; j = j++)
				{  
					printf("%d", out[i][j]);
				}
				printf("\n");
			}
		}
	}


	return 0;
}


/*
Server assignment 7

*/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 

int main(int argc, char *argv[])
{
	int listenfd = 0, connfd = 0;
	struct sockaddr_in serv_addr; 

	char sendBuff[1025];
	time_t ticks; 

	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&serv_addr, '0', sizeof(serv_addr));
	memset(sendBuff, '0', sizeof(sendBuff)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(5000); 

	bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

	listen(listenfd, 10); 
	connfd = accept(listenfd, (struct sockaddr*)NULL, NULL); 

	while(1)
	{

		int retnum = 0;

		recv(sockfd, &num, sizeof(int), 0);
		switch(num)
		{
		case 0: = 		  
		case 1:
			retnum = 3;
			break;
		case 2:
			retnum = 7;
			break;
		case 3:
			retnum = 15;
			break;
		case 4:
			retnum = 27;
			break;
		default:
			retnum = -1;

		}
		send(sockfd, &retnum, sizeof(int), 0);  


	}
}


/*
client assignment7

*/

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h> 

int main(int argc, char *argv[])
{
	int sockfd = 0, n = 0;

	struct sockaddr_in serv_addr; 


	memset(recvBuff, '0',sizeof(recvBuff));
	if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("\n Error : Could not create socket \n");
		return 1;
	} 

	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(5000); 



	if( connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
	{
		printf("\n Error : Connect Failed \n");
		return 1;
	} 


	while ( 1)
	{

		int num;
		int getvalue;
		int retnum = 0;
		printf("enter number in sequence 0 1 2 3 4 \n");
		scanf("%d", &num);
		send(sockfd, &num, sizeof(int), 0);

		recv(sockfd, &getvalue, sizeof(int), 0);

		printf("output number  = %d \n", getvalue); 

	} 


	return 0;
}
/*
Server assignment11

*/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 

int main(int argc, char *argv[])
{
	int listenfd = 0, new_sockid = 0;
	struct sockaddr_in serv_addr; 


	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&serv_addr, '0', sizeof(serv_addr));
	memset(sendBuff, '0', sizeof(sendBuff)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(5000); 

	bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

	listen(listenfd, 10); 
	new_sockid = accept(listenfd, (struct sockaddr*)NULL, NULL); 
	while (1) 
	{
		int num; char clientkey[50];
		int ret = recv(new_sockid,clientkey,50,0); 
		printf("%s \n", clientkey); 
		if (ret > 0) 
		{ 
			int index=0; 
			int i=0;

			for(i=0;i<SIZE&&I <index;i++)
			{
				printf("hari log\n");
				if (strncmp(hashkey[i] -> key,clientkey,strlen(clientkey))==0)
				{
					printf("find\n");
					break; 
				} 
				printf("log\n");
			} 
			if (1 == index) 
			{ 
				printf("not\n");
				if (index < 5125) 
				{
					hashkey[index] = (struct node*)malloc(sizeof(struct node)); 
					strcpy(hashkey[index]—>key, clientkey); 
					strcpy(hashkey[index]->meaning, clientkey);
				}
				printf("key %s\n", hashkey[index]—>key); 
				index++; 

				strcpy(clientkey, "not found"); 
			} 
			else
			{ 
				printf("found meaning\n"); 
				strcpy(clientkey, "found");
			} 
			ret = send(new_sockid, clientkey, strlen(clientkey) + 1, 0); 
			printf("Send number ret %d %s\n", ret, clientkey);
		}
	}

}


/*
client assignment11

*/

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h> 

int main(int argc, char *argv[])
{
	int sersock = 0, n = 0;

	struct sockaddr_in serv_addr;     

	if((sersock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("\n Error : Could not create socket \n");
		return 1;
	} 

	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(5000); 



	if( connect(sersock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
	{
		printf("\n Error : Connect Failed \n");
		return 1;
	} 


	while(1)
	{
		char outbuffer[50];
		int i;
		int ret;
		char clientkey[50];
		char out;
		printf("\nenter key\n"); 
		scanf("%s", clientkey);
		int size = send(sersock,clientkey,sizeof(clientkey),0);
		if (size< 0)
		{ 
			printf("data write failed\n"); 
			exit(0); 
		}
		ret = recv(sersock, outbuffer, sizeof(outbuffer), 0);
		if (ret >0) 
		{ printf("output = %s", outbuffer);
		} 
	} 

	return 0;
}






/*
Server assignment12

*/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 

int main(int argc, char *argv[])
{
	int listenfd = 0, new_sockid = 0;
	struct sockaddr_in serv_addr; 


	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&serv_addr, '0', sizeof(serv_addr));
	memset(sendBuff, '0', sizeof(sendBuff)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(5000); 

	bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

	listen(listenfd, 10); 
	new_sockid = accept(listenfd, (struct sockaddr*)NULL, NULL); 
	while (1) 
	{ 
		int recnum; 
		char out[100];
		recv(new_sockid, &recnum, sizeof(int), 0);
		if (recnum > 0)
		{ 
			int index = 0; 
			int i = 2;
			int count = 0;
			while (recnum > 1) 
			{ 
				if (recnum % i == 0) 
				{ 
					out[index++] = i; recnum = recnum / i; count++;
				} 
				else 
					i++; 
			} 
			int ret = send(new_sockid, &out, sizeof(out), 0);
			printf("send number ret %d\n", ret); }   }
}


/*
client assignment12

*/

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h> 

int main(int argc, char *argv[])
{
	int sersock = 0, n = 0;

	struct sockaddr_in serv_addr;     

	if((sersock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("\n Error : Could not create socket \n");
		return 1;
	} 

	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(5000); 



	if( connect(sersock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
	{
		printf("\n Error : Connect Failed \n");
		return 1;
	} 


	while(1)
	{
		int sendnum;
		int out[100];
		int ret;
		printf("Enter number \n");
		scanf("%d",&sendnum);
		int size= send(sersock, &sendnum,sizeof(int),0);

		if (size<0)
		{
			printf("data wrfite falied\n");
			exit(0);
		}
		ret = recv(sersock, &out, sizeof(out), 0);
		if (ret > 0){
			for (int i=0;i<sendnum;i++)
				printf(" %d ", out[i]);
		}
	}
	return 0;
}


/*
server 13
*/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 

struct node
{
	char question[100];
	char answer[100];
}

struct node database[20]=
{ 
	{"what is your name", "ramesh"},
	{"what is your age", "30"},
	{"what is your hobby", "sing a song"},
	{"what is your father name ", "Mr Rampal"},
	{"what is your nick name", "suresh"},
	{"what is your degree", "B. Tech"},
	{"what is your first schoold name", "Manish Se. Sec School"},
	{"what is your first last name", "Saini"},
	{"who  is your country  name", "india"},
	{"what is your state", "Delhi"},
};
int main(int argc, char *argv[])
{
	int listenfd = 0, connfd = 0;
	struct sockaddr_in serv_addr; 

	char sendBuff[1025];



	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&serv_addr, '0', sizeof(serv_addr));
	memset(sendBuff, '0', sizeof(sendBuff)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons(5000); 

	bind(listenfd, (struct sockaddr*)&serv_addr, sizeof(serv_addr)); 

	listen(listenfd, 10); 
	connfd = accept(listenfd, (struct sockaddr*)NULL, NULL); 

	while(1)
	{

		int retnum = 0;

		recv(sockfd, &num, sizeof(int), 0);

		send(sockfd, &retnum, sizeof(int), 0);       


	}
}

/* client  13* */

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h> 

int main(int argc, char *argv[])
{
	int sockfd = 0, n = 0;
	char recvBuff[1024];
	struct sockaddr_in serv_addr; 



	memset(recvBuff, '0',sizeof(recvBuff));
	if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		printf("\n Error : Could not create socket \n");
		return 1;
	} 

	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(5000); 



	if( connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
	{
		printf("\n Error : Connect Failed \n");
		return 1;
	} 


	while ( 1)
	{

		int num;
		int getvalue;
		int retnum = 0;
		printf("enter question number  \n");
		printf("1 what is your name\n");
		printf("2 what is your age\n");
		printf("3 what is your hobby\n");
		printf("4 what is your father name \n");
		printf("5 what is your nick name\n");
		printf("6 what is your degree \n");
		printf("7 what is your first schoold name \n");,
			printf("8 what is your first last name \n");
		printf("9 who  is your country  name \n");
		printf("10 what is your state \n");
		scanf("%d", &num);
		send(sockfd, &num, sizeof(int), 0);

		recv(sockfd, &getvalue, sizeof(int), 0);

		printf("output number  = %d \n", getvalue); 

	} 


	return 0;
}



//  server 15 & 16

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <signal.h>
#include <ctype.h>          
#include <arpa/inet.h>
#include <netdb.h>

#define PORT 20000 
#define BACKLOG 5
#define LENGTH 512 

void error(const char *msg)
{
	perror(msg);
	exit(1);
}

int main ()
{
	/* Defining Variables */
	int sockfd; 
	int nsockfd; 
	int num;
	int sin_size; 
	struct sockaddr_in addr_local; /* client addr */
	struct sockaddr_in addr_remote; /* server addr */
	char revbuf[LENGTH]; // Receiver buffer
	/* Get the Socket file descriptor */
	if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1 )
	{
		fprintf(stderr, "ERROR: Failed to obtain Socket Descriptor. (errno = %d)\n", errno);
		exit(1);
	}
	else 
		printf("[Server] Obtaining socket descriptor successfully.\n");

	/* Fill the client socket address struct */
	addr_local.sin_family = AF_INET; // Protocol Family
	addr_local.sin_port = htons(PORT); // Port number
	addr_local.sin_addr.s_addr = INADDR_ANY; // AutoFill local address
	bzero(&(addr_local.sin_zero), 8); // Flush the rest of struct

	/* Bind a special Port */
	if( bind(sockfd, (struct sockaddr*)&addr_local, sizeof(struct sockaddr)) == -1 )
	{
		fprintf(stderr, "ERROR: Failed to bind Port. (errno = %d)\n", errno);
		exit(1);
	}
	else 
		printf("[Server] Binded tcp port %d in addr 127.0.0.1 sucessfully.\n",PORT);

	/* Listen remote connect/calling */
	if(listen(sockfd,BACKLOG) == -1)
	{
		fprintf(stderr, "ERROR: Failed to listen Port. (errno = %d)\n", errno);
		exit(1);
	}
	else
		printf ("[Server] Listening the port %d successfully.\n", PORT);

	int success = 0;
	while(success == 0)
	{
		sin_size = sizeof(struct sockaddr_in);

		/* Wait a connection, and obtain a new socket file despriptor for single connection */
		if ((nsockfd = accept(sockfd, (struct sockaddr *)&addr_remote, &sin_size)) == -1) 
		{
			fprintf(stderr, "ERROR: Obtaining new Socket Despcritor. (errno = %d)\n", errno);
			exit(1);
		}
		else 
			printf("[Server] Server has got connected from %s.\n", inet_ntoa(addr_remote.sin_addr));

		/*Receive File from Client */
		char* fr_name = "/home/aryan/Desktop/receive.txt";
		FILE *fr = fopen(fr_name, "a");
		if(fr == NULL)
			printf("File %s Cannot be opened file on server.\n", fr_name);
		else
		{
			bzero(revbuf, LENGTH); 
			int fr_block_sz = 0;
			while((fr_block_sz = recv(nsockfd, revbuf, LENGTH, 0)) > 0) 
			{
				int write_sz = fwrite(revbuf, sizeof(char), fr_block_sz, fr);
				if(write_sz < fr_block_sz)
				{
					error("File write failed on server.\n");
				}
				bzero(revbuf, LENGTH);
				if (fr_block_sz == 0 || fr_block_sz != 512) 
				{
					break;
				}
			}
			if(fr_block_sz < 0)
			{
				if (errno == EAGAIN)
				{
					printf("recv() timed out.\n");
				}
				else
				{
					fprintf(stderr, "recv() failed due to errno = %d\n", errno);
					exit(1);
				}
			}
			printf("Ok received from client!\n");
			fclose(fr); 
		}

		/* Call the Script */
		system("cd ; chmod +x script.sh ; ./script.sh");
		/* Send File to Client */
		//if(!fork())
		//{
		char* fs_name = "/home/aryan/Desktop/output.txt";
		char sdbuf[LENGTH]; // Send buffer
		printf("[Server] Sending %s to the Client...", fs_name);
		FILE *fs = fopen(fs_name, "r");
		if(fs == NULL)
		{
			fprintf(stderr, "ERROR: File %s not found on server. (errno = %d)\n", fs_name, errno);
			exit(1);
		}

		bzero(sdbuf, LENGTH); 
		int fs_block_sz; 
		while((fs_block_sz = fread(sdbuf, sizeof(char), LENGTH, fs))>0)
		{
			if(send(nsockfd, sdbuf, fs_block_sz, 0) < 0)
			{
				fprintf(stderr, "ERROR: Failed to send file %s. (errno = %d)\n", fs_name, errno);
				exit(1);
			}
			bzero(sdbuf, LENGTH);
		}
		printf("Ok sent to client!\n");
		success = 1;
		close(nsockfd);
		printf("[Server] Connection with Client closed. Server will wait now...\n");
		while(waitpid(-1, NULL, WNOHANG) > 0);
		//}
	}
}

// client 15 16

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <signal.h>
#include <ctype.h>          
#include <arpa/inet.h>
#include <netdb.h>

#define PORT 20000
#define LENGTH 512 


void error(const char *msg)
{
	perror(msg);
	exit(1);
}

int main(int argc, char *argv[])
{
	/* Variable Definition */
	int sockfd; 
	int nsockfd;
	char revbuf[LENGTH]; 
	struct sockaddr_in remote_addr;

	/* Get the Socket file descriptor */
	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		fprintf(stderr, "ERROR: Failed to obtain Socket Descriptor! (errno = %d)\n",errno);
		exit(1);
	}

	/* Fill the socket address struct */
	remote_addr.sin_family = AF_INET; 
	remote_addr.sin_port = htons(PORT); 
	inet_pton(AF_INET, "127.0.0.1", &remote_addr.sin_addr); 
	bzero(&(remote_addr.sin_zero), 8);

	/* Try to connect the remote */
	if (connect(sockfd, (struct sockaddr *)&remote_addr, sizeof(struct sockaddr)) == -1)
	{
		fprintf(stderr, "ERROR: Failed to connect to the host! (errno = %d)\n",errno);
		exit(1);
	}
	else 
		printf("[Client] Connected to server at port %d...ok!\n", PORT);

	/* Send File to Server */
	//if(!fork())
	//{
	char* fs_name = "/home/aryan/Desktop/quotidiani.txt";
	char sdbuf[LENGTH]; 
	printf("[Client] Sending %s to the Server... ", fs_name);
	FILE *fs = fopen(fs_name, "r");
	if(fs == NULL)
	{
		printf("ERROR: File %s not found.\n", fs_name);
		exit(1);
	}

	bzero(sdbuf, LENGTH); 
	int fs_block_sz; 
	while((fs_block_sz = fread(sdbuf, sizeof(char), LENGTH, fs)) > 0)
	{
		if(send(sockfd, sdbuf, fs_block_sz, 0) < 0)
		{
			fprintf(stderr, "ERROR: Failed to send file %s. (errno = %d)\n", fs_name, errno);
			break;
		}
		bzero(sdbuf, LENGTH);
	}
	printf("Ok File %s from Client was Sent!\n", fs_name);
	//}
	/* Receive File from Server */
	printf("[Client] Receiveing file from Server and saving it as final.txt...");
	char* fr_name = "/home/aryan/Desktop/progetto/final.txt";
	FILE *fr = fopen(fr_name, "a");
	if(fr == NULL)
		printf("File %s Cannot be opened.\n", fr_name);
	else
	{
		bzero(revbuf, LENGTH); 
		int fr_block_sz = 0;
		while((fr_block_sz = recv(sockfd, revbuf, LENGTH, 0)) > 0)
		{
			int write_sz = fwrite(revbuf, sizeof(char), fr_block_sz, fr);
			if(write_sz < fr_block_sz)
			{
				error("File write failed.\n");
			}
			bzero(revbuf, LENGTH);
			if (fr_block_sz == 0 || fr_block_sz != 512) 
			{
				break;
			}
		}
		if(fr_block_sz < 0)
		{
			if (errno == EAGAIN)
			{
				printf("recv() timed out.\n");
			}
			else
			{
				fprintf(stderr, "recv() failed due to errno = %d\n", errno);
			}
		}
		printf("Ok received from server!\n");
		fclose(fr);
	}
	close (sockfd);
	printf("[Client] Connection lost.\n");
	return (0);
}
