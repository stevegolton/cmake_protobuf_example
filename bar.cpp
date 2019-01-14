#include <iostream>
#include <fstream>
#include "foo.pb.h"

using namespace std;

int main(void)
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	Ping ping;

	ping.set_message("Hello, World!");

	fstream output("baz", ios::out | ios::trunc | ios::binary);
    if (!ping.SerializeToOstream(&output)) {
		cerr << "Failed to write address book." << endl;
		return -1;
    }

  	// Optional:  Delete all global objects allocated by libprotobuf.
  	google::protobuf::ShutdownProtobufLibrary();
}
