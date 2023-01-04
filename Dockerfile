FROM alpine:latest
 
COPY main.cpp /app/

RUN apk add --update g++ make
RUN g++ -o /app/main /app/main.cpp
WORKDIR /app

CMD ["./main"]

