#ifndef __STACKBASE_H__
#define __STACKBASE_H__

#if (defined _WIN32 || defined WIN32) && defined PI_API_EXPORTS
#define PI_EXPORTS __declspec(dllexport)
#elif defined __GNUC__ && __GNUC__ >= 4
#define PI_EXPORTS __attribute__((visibility("default")))
#else
#define PI_EXPORTS
#endif

#ifndef VF_EXTERN_C
#ifdef __cplusplus
#define VF_EXTERN_C extern "C"
#else
#define VF_EXTERN_C
#endif
#endif

#define MAXSIZE 100
namespace LDS
{

template<class DataType>
class PI_EXPORTS Stack
{

public:
	Stack();
	bool empty();
	bool push(const DataType& data);
	bool pop(DataType& topdata);

private:
	DataType m_data[MAXSIZE + 10];
	int m_top{-1};
};

} // namespace LDS

#endif // __STACKBASE_H__