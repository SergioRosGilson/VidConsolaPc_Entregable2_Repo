# UE5 Level Streaming Gameplay Demo

> Academic project developed in **Unreal Engine 5.6** that demonstrates asynchronous level streaming, gameplay progression, and hybrid **C++ / Blueprint** development.

---

## Overview

This project was developed as part of a university assignment focused on gameplay programming in Unreal Engine.

The objective was to redesign an existing level into a streamed environment composed of multiple sublevels while implementing a complete gameplay progression system. The project combines native C++ with Blueprint scripting following Unreal Engine's Gameplay Framework.

---

## Features

- Asynchronous level streaming implemented in C++
- Persistent Level managing multiple streamed sublevels
- Gameplay progression across three independent rooms
- Enemy combat system with health
- Collectible coin system
- Secret passage unlocked after collecting all required items
- Breakable wall mechanic
- Interactive end-level objective
- Blueprint Interfaces for gameplay interactions
- Hybrid C++ and Blueprint workflow

---

## Technical Highlights

### Level Streaming

The project uses a **Persistent Level** that manages three streamed gameplay areas.

Custom C++ functions handle asynchronous loading and unloading of each room through trigger volumes, ensuring seamless transitions without interrupting gameplay.

### Gameplay Architecture

The level is organized into independent streamed sublevels:

- Gameplay
- Architecture
- Lighting

This separation keeps gameplay logic independent from environmental assets, improving scalability and organization.

### C++ Systems

Core streaming functionality was implemented in C++ and exposed to Blueprints.

Implemented systems include:

- Asynchronous level loading
- Asynchronous level unloading
- Blueprint-callable C++ functions
- Trigger-driven streaming events

### Blueprint Systems

Blueprints are used to implement gameplay mechanics such as:

- Enemy behaviour
- Door logic
- Coin collection
- Breakable wall
- Final interaction

Communication between gameplay actors is handled using Blueprint Interfaces.

---

## Gameplay Flow

### Room 1
- Defeat the guardian enemy.
- The exit door opens automatically after the enemy is defeated.

### Room 2
- Collect all five hidden coins.
- A secret passage opens once all collectibles are obtained.

### Room 3
- Locate the breakable wall.
- Destroy it using the combat system.
- Reach the hidden chamber.
- Interact with the final statue to complete the level.

---

## Technologies

- Unreal Engine 5.6
- C++
- Unreal Blueprints
- Level Streaming
- Blueprint Interfaces
- Visual Studio 2022

---

## How to Run

To ensure proper functionality of the level streaming system, it is recommended to open and run the project through the Visual Studio solution (.sln).

### Steps:

1. Generate Visual Studio project files (if needed).
2. Open the `.sln` file.
3. Build the solution in **Development Editor** configuration.
4. Launch the project from Visual Studio or open Unreal Engine from the solution.

> Note: The level streaming system relies on C++ initialization and trigger bindings. Running the project without building from the solution may result in incomplete initialization of gameplay systems.

---

## Learning Outcomes

During this project I gained practical experience with:

- Unreal Engine Gameplay Framework
- Native gameplay programming in C++
- Exposing C++ functionality to Blueprints
- Asynchronous Level Streaming
- Blueprint Interfaces
- Hybrid C++ / Blueprint development
- Level organization and project architecture

---

## Tested On

- Unreal Engine 5.6
- Visual Studio 2022
- Windows 10/11

---

## About

This project was developed as part of a university assignment focused on Unreal Engine gameplay programming and level streaming.

The repository has been cleaned and documented as part of my programming portfolio to showcase experience with Unreal Engine 5, C++ gameplay systems, and Blueprint-based development.
