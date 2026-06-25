# UE5 Level Streaming Gameplay Demo

> Academic project developed in **Unreal Engine 5.6** that demonstrates asynchronous level streaming and gameplay systems using **C++ and Blueprints**.

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

### Level Streaming System
- Persistent Level controls the game flow
- Trigger-based streaming system
- Asynchronous loading and unloading of sublevels
- Seamless transitions between gameplay areas

### Gameplay Architecture
- Separation between Gameplay, Architecture, and Lighting levels
- Modular design for scalability and maintainability

### Core Systems (C++)
- Asynchronous level loading/unloading
- Trigger-driven gameplay events
- Blueprint-callable functions

### Blueprint Systems
- Enemy behavior and combat logic
- Door and trigger interactions
- Collectible system
- Gameplay event communication via interfaces

---

## Gameplay Flow

1. Defeat the guardian enemy
2. Unlock the first door
3. Collect required items
4. Unlock hidden passage
5. Reach final objective

---

## Controls

The gameplay uses a minimal interaction system focused on combat and trigger-based interactions.

- **W / A / S / D** → Movement
- **F** → Attack enemies
- **E** → Interact with gameplay elements (doors, triggers, objectives)

---

## Technologies

- Unreal Engine 5.6
- C++
- Unreal Blueprints
- Level Streaming
- Blueprint Interfaces
- Visual Studio 2022

---

## Learning Outcomes

- Unreal Engine Gameplay Framework
- Asynchronous level streaming systems
- Hybrid C++ / Blueprint architecture
- Trigger-based gameplay design
- Modular level design principles

---

## Tested On

- Unreal Engine 5.6
- Windows 10/11

---

## About

This project was developed as part of a university assignment focused on Unreal Engine gameplay programming and level streaming.

The repository has been prepared as part of a programming portfolio.
