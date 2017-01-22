#include "CppParser.h"
#include "AST.h"
#include "Target.h"

using namespace System;
using namespace System::Runtime::InteropServices;

CppSharp::Parser::CppParserOptions::CppParserOptions(::CppSharp::CppParser::CppParserOptions* native)
    : __ownsNativeInstance(false)
{
    NativePtr = native;
}

CppSharp::Parser::CppParserOptions^ CppSharp::Parser::CppParserOptions::__CreateInstance(::System::IntPtr native)
{
    return gcnew ::CppSharp::Parser::CppParserOptions((::CppSharp::CppParser::CppParserOptions*) native.ToPointer());
}

CppSharp::Parser::CppParserOptions::~CppParserOptions()
{
    delete NativePtr;
}

CppSharp::Parser::CppParserOptions::CppParserOptions()
{
    __ownsNativeInstance = true;
    NativePtr = new ::CppSharp::CppParser::CppParserOptions();
}

System::String^ CppSharp::Parser::CppParserOptions::GetArguments(unsigned int i)
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getArguments(i);
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::CppParserOptions::AddArguments(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->addArguments(__arg0);
}

void CppSharp::Parser::CppParserOptions::ClearArguments()
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->clearArguments();
}

System::String^ CppSharp::Parser::CppParserOptions::GetSourceFiles(unsigned int i)
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getSourceFiles(i);
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::CppParserOptions::AddSourceFiles(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->addSourceFiles(__arg0);
}

void CppSharp::Parser::CppParserOptions::ClearSourceFiles()
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->clearSourceFiles();
}

System::String^ CppSharp::Parser::CppParserOptions::GetIncludeDirs(unsigned int i)
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getIncludeDirs(i);
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::CppParserOptions::AddIncludeDirs(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->addIncludeDirs(__arg0);
}

void CppSharp::Parser::CppParserOptions::ClearIncludeDirs()
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->clearIncludeDirs();
}

System::String^ CppSharp::Parser::CppParserOptions::GetSystemIncludeDirs(unsigned int i)
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getSystemIncludeDirs(i);
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::CppParserOptions::AddSystemIncludeDirs(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->addSystemIncludeDirs(__arg0);
}

void CppSharp::Parser::CppParserOptions::ClearSystemIncludeDirs()
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->clearSystemIncludeDirs();
}

System::String^ CppSharp::Parser::CppParserOptions::GetDefines(unsigned int i)
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getDefines(i);
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::CppParserOptions::AddDefines(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->addDefines(__arg0);
}

void CppSharp::Parser::CppParserOptions::ClearDefines()
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->clearDefines();
}

System::String^ CppSharp::Parser::CppParserOptions::GetUndefines(unsigned int i)
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getUndefines(i);
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::CppParserOptions::AddUndefines(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->addUndefines(__arg0);
}

void CppSharp::Parser::CppParserOptions::ClearUndefines()
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->clearUndefines();
}

System::String^ CppSharp::Parser::CppParserOptions::GetLibraryDirs(unsigned int i)
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getLibraryDirs(i);
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::CppParserOptions::AddLibraryDirs(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->addLibraryDirs(__arg0);
}

void CppSharp::Parser::CppParserOptions::ClearLibraryDirs()
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->clearLibraryDirs();
}

CppSharp::Parser::CppParserOptions::CppParserOptions(CppSharp::Parser::CppParserOptions^ _0)
{
    __ownsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto &__arg0 = *(::CppSharp::CppParser::CppParserOptions*)_0->NativePtr;
    NativePtr = new ::CppSharp::CppParser::CppParserOptions(__arg0);
}

System::IntPtr CppSharp::Parser::CppParserOptions::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void CppSharp::Parser::CppParserOptions::__Instance::set(System::IntPtr object)
{
    NativePtr = (::CppSharp::CppParser::CppParserOptions*)object.ToPointer();
}

CppSharp::Parser::AST::ASTContext^ CppSharp::Parser::CppParserOptions::ASTContext::get()
{
    return (((::CppSharp::CppParser::CppParserOptions*)NativePtr)->ASTContext == nullptr) ? nullptr : gcnew CppSharp::Parser::AST::ASTContext((::CppSharp::CppParser::AST::ASTContext*)((::CppSharp::CppParser::CppParserOptions*)NativePtr)->ASTContext);
}

void CppSharp::Parser::CppParserOptions::ASTContext::set(CppSharp::Parser::AST::ASTContext^ value)
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->ASTContext = (::CppSharp::CppParser::AST::ASTContext*)value->NativePtr;
}

int CppSharp::Parser::CppParserOptions::ToolSetToUse::get()
{
    return ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->toolSetToUse;
}

void CppSharp::Parser::CppParserOptions::ToolSetToUse::set(int value)
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->toolSetToUse = value;
}

CppSharp::Parser::AST::CppAbi CppSharp::Parser::CppParserOptions::Abi::get()
{
    return (CppSharp::Parser::AST::CppAbi)((::CppSharp::CppParser::CppParserOptions*)NativePtr)->abi;
}

void CppSharp::Parser::CppParserOptions::Abi::set(CppSharp::Parser::AST::CppAbi value)
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->abi = (::CppSharp::CppParser::AST::CppAbi)value;
}

bool CppSharp::Parser::CppParserOptions::NoStandardIncludes::get()
{
    return ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->noStandardIncludes;
}

void CppSharp::Parser::CppParserOptions::NoStandardIncludes::set(bool value)
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->noStandardIncludes = value;
}

bool CppSharp::Parser::CppParserOptions::NoBuiltinIncludes::get()
{
    return ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->noBuiltinIncludes;
}

void CppSharp::Parser::CppParserOptions::NoBuiltinIncludes::set(bool value)
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->noBuiltinIncludes = value;
}

bool CppSharp::Parser::CppParserOptions::MicrosoftMode::get()
{
    return ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->microsoftMode;
}

void CppSharp::Parser::CppParserOptions::MicrosoftMode::set(bool value)
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->microsoftMode = value;
}

bool CppSharp::Parser::CppParserOptions::Verbose::get()
{
    return ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->verbose;
}

void CppSharp::Parser::CppParserOptions::Verbose::set(bool value)
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->verbose = value;
}

CppSharp::Parser::LanguageVersion CppSharp::Parser::CppParserOptions::LanguageVersion::get()
{
    return (CppSharp::Parser::LanguageVersion)((::CppSharp::CppParser::CppParserOptions*)NativePtr)->languageVersion;
}

void CppSharp::Parser::CppParserOptions::LanguageVersion::set(CppSharp::Parser::LanguageVersion value)
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->languageVersion = (::CppSharp::CppParser::LanguageVersion)value;
}

CppSharp::Parser::ParserTargetInfo^ CppSharp::Parser::CppParserOptions::TargetInfo::get()
{
    return (((::CppSharp::CppParser::CppParserOptions*)NativePtr)->targetInfo == nullptr) ? nullptr : gcnew CppSharp::Parser::ParserTargetInfo((::CppSharp::CppParser::ParserTargetInfo*)((::CppSharp::CppParser::CppParserOptions*)NativePtr)->targetInfo);
}

void CppSharp::Parser::CppParserOptions::TargetInfo::set(CppSharp::Parser::ParserTargetInfo^ value)
{
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->targetInfo = (::CppSharp::CppParser::ParserTargetInfo*)value->NativePtr;
}

System::String^ CppSharp::Parser::CppParserOptions::LibraryFile::get()
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getLibraryFile();
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::CppParserOptions::LibraryFile::set(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->setLibraryFile(__arg0);
}

System::String^ CppSharp::Parser::CppParserOptions::TargetTriple::get()
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getTargetTriple();
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::CppParserOptions::TargetTriple::set(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->setTargetTriple(__arg0);
}

unsigned int CppSharp::Parser::CppParserOptions::ArgumentsCount::get()
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getArgumentsCount();
    return __ret;
}

unsigned int CppSharp::Parser::CppParserOptions::SourceFilesCount::get()
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getSourceFilesCount();
    return __ret;
}

unsigned int CppSharp::Parser::CppParserOptions::IncludeDirsCount::get()
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getIncludeDirsCount();
    return __ret;
}

unsigned int CppSharp::Parser::CppParserOptions::SystemIncludeDirsCount::get()
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getSystemIncludeDirsCount();
    return __ret;
}

unsigned int CppSharp::Parser::CppParserOptions::DefinesCount::get()
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getDefinesCount();
    return __ret;
}

unsigned int CppSharp::Parser::CppParserOptions::UndefinesCount::get()
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getUndefinesCount();
    return __ret;
}

unsigned int CppSharp::Parser::CppParserOptions::LibraryDirsCount::get()
{
    auto __ret = ((::CppSharp::CppParser::CppParserOptions*)NativePtr)->getLibraryDirsCount();
    return __ret;
}

CppSharp::Parser::ParserDiagnostic::ParserDiagnostic(::CppSharp::CppParser::ParserDiagnostic* native)
    : __ownsNativeInstance(false)
{
    NativePtr = native;
}

CppSharp::Parser::ParserDiagnostic^ CppSharp::Parser::ParserDiagnostic::__CreateInstance(::System::IntPtr native)
{
    return gcnew ::CppSharp::Parser::ParserDiagnostic((::CppSharp::CppParser::ParserDiagnostic*) native.ToPointer());
}

CppSharp::Parser::ParserDiagnostic::~ParserDiagnostic()
{
    delete NativePtr;
}

CppSharp::Parser::ParserDiagnostic::ParserDiagnostic()
{
    __ownsNativeInstance = true;
    NativePtr = new ::CppSharp::CppParser::ParserDiagnostic();
}

CppSharp::Parser::ParserDiagnostic::ParserDiagnostic(CppSharp::Parser::ParserDiagnostic^ _0)
{
    __ownsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto &__arg0 = *(::CppSharp::CppParser::ParserDiagnostic*)_0->NativePtr;
    NativePtr = new ::CppSharp::CppParser::ParserDiagnostic(__arg0);
}

System::IntPtr CppSharp::Parser::ParserDiagnostic::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void CppSharp::Parser::ParserDiagnostic::__Instance::set(System::IntPtr object)
{
    NativePtr = (::CppSharp::CppParser::ParserDiagnostic*)object.ToPointer();
}

CppSharp::Parser::ParserDiagnosticLevel CppSharp::Parser::ParserDiagnostic::Level::get()
{
    return (CppSharp::Parser::ParserDiagnosticLevel)((::CppSharp::CppParser::ParserDiagnostic*)NativePtr)->level;
}

void CppSharp::Parser::ParserDiagnostic::Level::set(CppSharp::Parser::ParserDiagnosticLevel value)
{
    ((::CppSharp::CppParser::ParserDiagnostic*)NativePtr)->level = (::CppSharp::CppParser::ParserDiagnosticLevel)value;
}

int CppSharp::Parser::ParserDiagnostic::LineNumber::get()
{
    return ((::CppSharp::CppParser::ParserDiagnostic*)NativePtr)->lineNumber;
}

void CppSharp::Parser::ParserDiagnostic::LineNumber::set(int value)
{
    ((::CppSharp::CppParser::ParserDiagnostic*)NativePtr)->lineNumber = value;
}

int CppSharp::Parser::ParserDiagnostic::ColumnNumber::get()
{
    return ((::CppSharp::CppParser::ParserDiagnostic*)NativePtr)->columnNumber;
}

void CppSharp::Parser::ParserDiagnostic::ColumnNumber::set(int value)
{
    ((::CppSharp::CppParser::ParserDiagnostic*)NativePtr)->columnNumber = value;
}

System::String^ CppSharp::Parser::ParserDiagnostic::FileName::get()
{
    auto __ret = ((::CppSharp::CppParser::ParserDiagnostic*)NativePtr)->getFileName();
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::ParserDiagnostic::FileName::set(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::ParserDiagnostic*)NativePtr)->setFileName(__arg0);
}

System::String^ CppSharp::Parser::ParserDiagnostic::Message::get()
{
    auto __ret = ((::CppSharp::CppParser::ParserDiagnostic*)NativePtr)->getMessage();
    if (__ret == nullptr) return nullptr;
    return (__ret == 0 ? nullptr : clix::marshalString<clix::E_UTF8>(__ret));
}

void CppSharp::Parser::ParserDiagnostic::Message::set(System::String^ s)
{
    auto ___arg0 = clix::marshalString<clix::E_UTF8>(s);
    auto __arg0 = ___arg0.c_str();
    ((::CppSharp::CppParser::ParserDiagnostic*)NativePtr)->setMessage(__arg0);
}

CppSharp::Parser::ParserResult::ParserResult(::CppSharp::CppParser::ParserResult* native)
    : __ownsNativeInstance(false)
{
    NativePtr = native;
}

CppSharp::Parser::ParserResult^ CppSharp::Parser::ParserResult::__CreateInstance(::System::IntPtr native)
{
    return gcnew ::CppSharp::Parser::ParserResult((::CppSharp::CppParser::ParserResult*) native.ToPointer());
}

CppSharp::Parser::ParserResult::~ParserResult()
{
    delete NativePtr;
}

CppSharp::Parser::ParserResult::ParserResult()
{
    __ownsNativeInstance = true;
    NativePtr = new ::CppSharp::CppParser::ParserResult();
}

CppSharp::Parser::ParserResult::ParserResult(CppSharp::Parser::ParserResult^ _0)
{
    __ownsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto &__arg0 = *(::CppSharp::CppParser::ParserResult*)_0->NativePtr;
    NativePtr = new ::CppSharp::CppParser::ParserResult(__arg0);
}

CppSharp::Parser::ParserDiagnostic^ CppSharp::Parser::ParserResult::GetDiagnostics(unsigned int i)
{
    auto __ret = ((::CppSharp::CppParser::ParserResult*)NativePtr)->getDiagnostics(i);
    auto ____ret = new ::CppSharp::CppParser::ParserDiagnostic(__ret);
    return (____ret == nullptr) ? nullptr : gcnew CppSharp::Parser::ParserDiagnostic((::CppSharp::CppParser::ParserDiagnostic*)____ret);
}

void CppSharp::Parser::ParserResult::AddDiagnostics(CppSharp::Parser::ParserDiagnostic^ s)
{
    if (ReferenceEquals(s, nullptr))
        throw gcnew ::System::ArgumentNullException("s", "Cannot be null because it is a C++ reference (&).");
    auto &__arg0 = *(::CppSharp::CppParser::ParserDiagnostic*)s->NativePtr;
    ((::CppSharp::CppParser::ParserResult*)NativePtr)->addDiagnostics(__arg0);
}

void CppSharp::Parser::ParserResult::ClearDiagnostics()
{
    ((::CppSharp::CppParser::ParserResult*)NativePtr)->clearDiagnostics();
}

System::IntPtr CppSharp::Parser::ParserResult::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void CppSharp::Parser::ParserResult::__Instance::set(System::IntPtr object)
{
    NativePtr = (::CppSharp::CppParser::ParserResult*)object.ToPointer();
}

CppSharp::Parser::ParserResultKind CppSharp::Parser::ParserResult::Kind::get()
{
    return (CppSharp::Parser::ParserResultKind)((::CppSharp::CppParser::ParserResult*)NativePtr)->kind;
}

void CppSharp::Parser::ParserResult::Kind::set(CppSharp::Parser::ParserResultKind value)
{
    ((::CppSharp::CppParser::ParserResult*)NativePtr)->kind = (::CppSharp::CppParser::ParserResultKind)value;
}

CppSharp::Parser::AST::ASTContext^ CppSharp::Parser::ParserResult::ASTContext::get()
{
    return (((::CppSharp::CppParser::ParserResult*)NativePtr)->ASTContext == nullptr) ? nullptr : gcnew CppSharp::Parser::AST::ASTContext((::CppSharp::CppParser::AST::ASTContext*)((::CppSharp::CppParser::ParserResult*)NativePtr)->ASTContext);
}

void CppSharp::Parser::ParserResult::ASTContext::set(CppSharp::Parser::AST::ASTContext^ value)
{
    ((::CppSharp::CppParser::ParserResult*)NativePtr)->ASTContext = (::CppSharp::CppParser::AST::ASTContext*)value->NativePtr;
}

CppSharp::Parser::AST::NativeLibrary^ CppSharp::Parser::ParserResult::Library::get()
{
    return (((::CppSharp::CppParser::ParserResult*)NativePtr)->library == nullptr) ? nullptr : gcnew CppSharp::Parser::AST::NativeLibrary((::CppSharp::CppParser::AST::NativeLibrary*)((::CppSharp::CppParser::ParserResult*)NativePtr)->library);
}

void CppSharp::Parser::ParserResult::Library::set(CppSharp::Parser::AST::NativeLibrary^ value)
{
    ((::CppSharp::CppParser::ParserResult*)NativePtr)->library = (::CppSharp::CppParser::AST::NativeLibrary*)value->NativePtr;
}

unsigned int CppSharp::Parser::ParserResult::DiagnosticsCount::get()
{
    auto __ret = ((::CppSharp::CppParser::ParserResult*)NativePtr)->getDiagnosticsCount();
    return __ret;
}

CppSharp::Parser::ClangParser::ClangParser(::CppSharp::CppParser::ClangParser* native)
    : __ownsNativeInstance(false)
{
    NativePtr = native;
}

CppSharp::Parser::ClangParser^ CppSharp::Parser::ClangParser::__CreateInstance(::System::IntPtr native)
{
    return gcnew ::CppSharp::Parser::ClangParser((::CppSharp::CppParser::ClangParser*) native.ToPointer());
}

CppSharp::Parser::ClangParser::~ClangParser()
{
    delete NativePtr;
}

CppSharp::Parser::ParserResult^ CppSharp::Parser::ClangParser::ParseHeader(CppSharp::Parser::CppParserOptions^ Opts)
{
    auto __arg0 = (::CppSharp::CppParser::CppParserOptions*)Opts->NativePtr;
    auto __ret = ::CppSharp::CppParser::ClangParser::ParseHeader(__arg0);
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew CppSharp::Parser::ParserResult((::CppSharp::CppParser::ParserResult*)__ret);
}

CppSharp::Parser::ParserResult^ CppSharp::Parser::ClangParser::ParseLibrary(CppSharp::Parser::CppParserOptions^ Opts)
{
    auto __arg0 = (::CppSharp::CppParser::CppParserOptions*)Opts->NativePtr;
    auto __ret = ::CppSharp::CppParser::ClangParser::ParseLibrary(__arg0);
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew CppSharp::Parser::ParserResult((::CppSharp::CppParser::ParserResult*)__ret);
}

CppSharp::Parser::ParserTargetInfo^ CppSharp::Parser::ClangParser::GetTargetInfo(CppSharp::Parser::CppParserOptions^ Opts)
{
    auto __arg0 = (::CppSharp::CppParser::CppParserOptions*)Opts->NativePtr;
    auto __ret = ::CppSharp::CppParser::ClangParser::GetTargetInfo(__arg0);
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew CppSharp::Parser::ParserTargetInfo((::CppSharp::CppParser::ParserTargetInfo*)__ret);
}

CppSharp::Parser::ClangParser::ClangParser()
{
    __ownsNativeInstance = true;
    NativePtr = new ::CppSharp::CppParser::ClangParser();
}

CppSharp::Parser::ClangParser::ClangParser(CppSharp::Parser::ClangParser^ _0)
{
    __ownsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto &__arg0 = *(::CppSharp::CppParser::ClangParser*)_0->NativePtr;
    NativePtr = new ::CppSharp::CppParser::ClangParser(__arg0);
}

System::IntPtr CppSharp::Parser::ClangParser::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void CppSharp::Parser::ClangParser::__Instance::set(System::IntPtr object)
{
    NativePtr = (::CppSharp::CppParser::ClangParser*)object.ToPointer();
}
