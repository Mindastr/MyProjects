# My Assignments

Папка с моими заданиями по программированию.

## Структура

```
assignments/
├── cpp/      ← C++ задания
│   ├── src/
│   │   └── Test.cpp
│   ├── include/
│   │   └── Test.h
│   └── CMakeLists.txt
│
└── python/   ← Python задания
    ├── main.py
    └── requirements.txt
```

## Запуск

### C++
```bash
cd assignments/cpp
mkdir build && cd build
cmake ..
cmake --build .
./bin/MyProjects
```

### Python
```bash
cd assignments/python
python main.py
```

