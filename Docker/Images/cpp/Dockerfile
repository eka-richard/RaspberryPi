FROM gcc:latest

WORKDIR /usr/src

COPY SimpleApp/*.cpp SimpleApp/*.h ./

run g++ -o SimpleApp main.cpp

CMD ./SimpleApp