FROM gcc:4.9

WORKDIR /usr/src

COPY SimpleApp/*.cpp SimpleApp/*.h ./

run g++ -o SimpleApp main.cpp

CMD ./SimpleApp