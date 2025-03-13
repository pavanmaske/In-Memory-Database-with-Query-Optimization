In-Memory Database with Query Optimization

A high-performance, lightweight in-memory database built using C++, featuring B+ Trees for indexing, optimized query execution, LRU caching, and ACID transactions.

🚀 Features
✅ Fast Query Execution – Uses B+ Trees for efficient indexing and retrieval.
✅ SQL-like Query Processing – Basic SQL-style queries for ease of use.
✅ ACID Transactions – Ensures data consistency with commit/rollback support.
✅ LRU Caching – Speeds up frequently accessed data retrieval.
✅ Lightweight & Optimized – Designed for low-latency operations.

🏗️ Tech Stack
C++ 17	
SQLite 
B+ Trees	
LRU Cache	
CMake	

📂 Project Structure

📦 in-memory-db
 ┣ 📂 src                   # Core source files
 ┃ ┣ 📜 main.cpp             # Entry point
 ┃ ┣ 📜 storage.cpp/.h       # Data storage management
 ┃ ┣ 📜 bptree.cpp/.h        # B+ Tree implementation
 ┃ ┣ 📜 query_engine.cpp/.h  # SQL-like query processor
 ┃ ┣ 📜 transaction.cpp/.h   # ACID transactions
 ┃ ┣ 📜 cache.cpp/.h         # LRU cache for optimization
 ┃ ┗ 📜 utils.cpp/.h         # Utility functions
 ┣ 📂 tests                  # Unit tests using Google Test
 ┣ 📜 CMakeLists.txt         # Build configuration
 ┣ 📜 README.md              # Documentation
 ┣ 📜 .gitignore             # Ignore compiled files

 
🛠️ Installation & Setup

1️⃣ Clone the Repository

git clone https://github.com/your-username/in-memory-db.git
cd in-memory-db

2️⃣ Build the Project

mkdir build && cd build
cmake ..
make

3️⃣ Run the Database
./db_main

4️⃣ Run Tests
./runTests


Author
Pavan

