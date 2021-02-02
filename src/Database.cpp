#include "../include/Database.hpp"

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}


Database::Database()
{
    this->db = nullptr;
}

Database::~Database()
{
    close();
}

void Database::close()
{
      sqlite3_close(db);

      db = nullptr;

}

void Database::createOrOpenDatabase(std::string path)
{
    createDatabase(path);
}

void Database::execute(std::string query)
{
    queryExecutor(query);
}

/*bool Database::isDatabaseOpen()
{
    return (db == nullptr) ? false : true;
} */


void Database::queryExecutor(std::string query)     // receives a string containing an sql command,
{                                                               // and a map containing error and success messages

  char* messaggeError;

  sqlite3_exec(db,
                      query.c_str(),      // sql string is converted to char array required by the function
                      NULL,
                      0,
                      &messaggeError);

}

bool Database::createDatabase(std::string path)
{
  const char *dbName;
  std::string tmpName;

  tmpName = path + ".db";                       // add .db at the end of string to form "databaseName".db

  dbName = tmpName.c_str();               // databaseName is converted to char array that is required by the sqlite3_open function

  return (bool) sqlite3_open(dbName, &this->db);

}
