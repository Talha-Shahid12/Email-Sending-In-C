# Email Sending in C

The Email Sending Project in C is a demonstration of sending email-like messages via a console-based application developed in the C programming language. This project showcases how to establish a basic email sending functionality using socket programming in C. It provides insights into socket communication, network programming, and user interaction within a console environment.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Implementation](#implementation)
- [Contributors](#contributors)

## Introduction

The Email Sending Project in C is designed to simulate sending messages over a network in a simplified email-like manner. It allows users to compose and send messages to a specified recipient using a server-client architecture.

## Features

- **Server-Client Architecture**: The project uses a server-client model where one instance acts as the server, and others act as clients to send messages.

- **Message Composition**: Users can compose messages with a recipient's address, subject, and message body.

- **Server Relay**: The server receives messages from clients and relays them to the intended recipients.

- **Basic Network Communication**: The project demonstrates socket programming to establish communication between the server and clients.

## Implementation

The project demonstrates the following key components:

- **Server**: The server listens for incoming connections from clients. It receives messages, extracts the recipient's address, and relays the messages.

- **Client**: Clients connect to the server to send messages. They provide recipient details, subject, and message body.
- **User Input/Output**: The console-based interface allows users to input recipient details and message content.


## Contributors

- [Talha Shahid](https://github.com/Talha-Shahid12)


---
