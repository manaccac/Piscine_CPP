#include <iostream>
#include <ctime>

struct Data
{
	std::string	*s1;
	int			i;
	std::string	*s2;
};


std::string	genRandomString(const int len)
{
    std::string randomString;
    const char randomCharArr[] = "aqwsedrftgyhujikolpmznxvc210367489QSZACWDEBFVRTGMNHYLJPUIKO";

    randomString.reserve(len);
    for (int i = 0; i < len; ++i)
        randomString += randomCharArr[rand() % (sizeof(randomCharArr) - 1)];
	return randomString;
}

void	outputData(Data *data)
{
	std::cout << "first string  : |" << *data->s1 << "|" << std::endl;
	std::cout << "int           : |" << data->i << "|" << std::endl;
	std::cout << "second string : |" << *data->s2 << "|" << std::endl;
}

void	*serialize(void)
{
	std::cout << "Serializing" << std::endl;

	Data *data = new Data;

	data->s1 = new std::string;
	*data->s1 = genRandomString(8);

	data->i = rand();

	data->s2 = new std::string;
	*data->s2 = genRandomString(8);

	outputData(data);

	void *ret = reinterpret_cast<void *>(data);
	return ret;
}

Data	*deserialize(void *raw)
{
	std::cout << "\nDeserializing" << std::endl;
	Data *data = reinterpret_cast<Data *>(raw);

	outputData(data);

	return data;
}

int		main()
{
	Data *data;
	void *raw;

	srand(time(NULL));

	raw = serialize();
	data = deserialize(raw);

	delete data->s1;
	delete data->s2;
	delete data;
	return 0;

}
