// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#include "messages.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

class CreateUserDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CreateUser>
      _instance;
} _CreateUser_default_instance_;
class AuthenticateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Authenticate>
      _instance;
} _Authenticate_default_instance_;
class CommonResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CommonResponse>
      _instance;
} _CommonResponse_default_instance_;
namespace protobuf_messages_2eproto {
static void InitDefaultsCreateUser() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_CreateUser_default_instance_;
    new (ptr) ::CreateUser();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::CreateUser::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_CreateUser =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsCreateUser}, {}};

static void InitDefaultsAuthenticate() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Authenticate_default_instance_;
    new (ptr) ::Authenticate();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Authenticate::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Authenticate =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAuthenticate}, {}};

static void InitDefaultsCommonResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_CommonResponse_default_instance_;
    new (ptr) ::CommonResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::CommonResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_CommonResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsCommonResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_CreateUser.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Authenticate.base);
  ::google::protobuf::internal::InitSCC(&scc_info_CommonResponse.base);
}

}  // namespace protobuf_messages_2eproto
bool CommonResponse_Result_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const CommonResponse_Result CommonResponse::Failed;
const CommonResponse_Result CommonResponse::Success;
const CommonResponse_Result CommonResponse::Error;
const CommonResponse_Result CommonResponse::Result_MIN;
const CommonResponse_Result CommonResponse::Result_MAX;
const int CommonResponse::Result_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void CreateUser::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CreateUser::kUserFieldNumber;
const int CreateUser::kPassFieldNumber;
const int CreateUser::kMobilePhoneNumberFieldNumber;
const int CreateUser::kEmailFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CreateUser::CreateUser()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_messages_2eproto::scc_info_CreateUser.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:CreateUser)
}
CreateUser::CreateUser(const CreateUser& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  user_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.user().size() > 0) {
    user_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_);
  }
  pass_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.pass().size() > 0) {
    pass_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pass_);
  }
  mobilephonenumber_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.mobilephonenumber().size() > 0) {
    mobilephonenumber_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mobilephonenumber_);
  }
  email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.email().size() > 0) {
    email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
  }
  // @@protoc_insertion_point(copy_constructor:CreateUser)
}

void CreateUser::SharedCtor() {
  user_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pass_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mobilephonenumber_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

CreateUser::~CreateUser() {
  // @@protoc_insertion_point(destructor:CreateUser)
  SharedDtor();
}

void CreateUser::SharedDtor() {
  user_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pass_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mobilephonenumber_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CreateUser::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CreateUser& CreateUser::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_messages_2eproto::scc_info_CreateUser.base);
  return *internal_default_instance();
}


void CreateUser::Clear() {
// @@protoc_insertion_point(message_clear_start:CreateUser)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  user_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pass_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  mobilephonenumber_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool CreateUser::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:CreateUser)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string user = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->user().data(), static_cast<int>(this->user().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "CreateUser.user"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string pass = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_pass()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->pass().data(), static_cast<int>(this->pass().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "CreateUser.pass"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string mobilePhoneNumber = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mobilephonenumber()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->mobilephonenumber().data(), static_cast<int>(this->mobilephonenumber().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "CreateUser.mobilePhoneNumber"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string email = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_email()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->email().data(), static_cast<int>(this->email().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "CreateUser.email"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CreateUser)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CreateUser)
  return false;
#undef DO_
}

void CreateUser::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CreateUser)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string user = 1;
  if (this->user().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user().data(), static_cast<int>(this->user().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CreateUser.user");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->user(), output);
  }

  // string pass = 2;
  if (this->pass().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->pass().data(), static_cast<int>(this->pass().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CreateUser.pass");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->pass(), output);
  }

  // string mobilePhoneNumber = 3;
  if (this->mobilephonenumber().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->mobilephonenumber().data(), static_cast<int>(this->mobilephonenumber().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CreateUser.mobilePhoneNumber");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->mobilephonenumber(), output);
  }

  // string email = 4;
  if (this->email().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->email().data(), static_cast<int>(this->email().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CreateUser.email");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->email(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:CreateUser)
}

size_t CreateUser::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CreateUser)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string user = 1;
  if (this->user().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->user());
  }

  // string pass = 2;
  if (this->pass().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->pass());
  }

  // string mobilePhoneNumber = 3;
  if (this->mobilephonenumber().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->mobilephonenumber());
  }

  // string email = 4;
  if (this->email().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->email());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CreateUser::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const CreateUser*>(&from));
}

void CreateUser::MergeFrom(const CreateUser& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CreateUser)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.user().size() > 0) {

    user_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_);
  }
  if (from.pass().size() > 0) {

    pass_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pass_);
  }
  if (from.mobilephonenumber().size() > 0) {

    mobilephonenumber_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mobilephonenumber_);
  }
  if (from.email().size() > 0) {

    email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
  }
}

void CreateUser::CopyFrom(const CreateUser& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CreateUser)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CreateUser::IsInitialized() const {
  return true;
}

void CreateUser::Swap(CreateUser* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CreateUser::InternalSwap(CreateUser* other) {
  using std::swap;
  user_.Swap(&other->user_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  pass_.Swap(&other->pass_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  mobilephonenumber_.Swap(&other->mobilephonenumber_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  email_.Swap(&other->email_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string CreateUser::GetTypeName() const {
  return "CreateUser";
}


// ===================================================================

void Authenticate::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Authenticate::kUserFieldNumber;
const int Authenticate::kPassFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Authenticate::Authenticate()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_messages_2eproto::scc_info_Authenticate.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Authenticate)
}
Authenticate::Authenticate(const Authenticate& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  user_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.user().size() > 0) {
    user_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_);
  }
  pass_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.pass().size() > 0) {
    pass_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pass_);
  }
  // @@protoc_insertion_point(copy_constructor:Authenticate)
}

void Authenticate::SharedCtor() {
  user_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pass_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Authenticate::~Authenticate() {
  // @@protoc_insertion_point(destructor:Authenticate)
  SharedDtor();
}

void Authenticate::SharedDtor() {
  user_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pass_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Authenticate::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Authenticate& Authenticate::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_messages_2eproto::scc_info_Authenticate.base);
  return *internal_default_instance();
}


void Authenticate::Clear() {
// @@protoc_insertion_point(message_clear_start:Authenticate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  user_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pass_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Authenticate::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:Authenticate)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string user = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_user()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->user().data(), static_cast<int>(this->user().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Authenticate.user"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string pass = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_pass()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->pass().data(), static_cast<int>(this->pass().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Authenticate.pass"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Authenticate)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Authenticate)
  return false;
#undef DO_
}

void Authenticate::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Authenticate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string user = 1;
  if (this->user().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->user().data(), static_cast<int>(this->user().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Authenticate.user");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->user(), output);
  }

  // string pass = 2;
  if (this->pass().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->pass().data(), static_cast<int>(this->pass().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Authenticate.pass");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->pass(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:Authenticate)
}

size_t Authenticate::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Authenticate)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string user = 1;
  if (this->user().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->user());
  }

  // string pass = 2;
  if (this->pass().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->pass());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Authenticate::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Authenticate*>(&from));
}

void Authenticate::MergeFrom(const Authenticate& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Authenticate)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.user().size() > 0) {

    user_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_);
  }
  if (from.pass().size() > 0) {

    pass_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.pass_);
  }
}

void Authenticate::CopyFrom(const Authenticate& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Authenticate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Authenticate::IsInitialized() const {
  return true;
}

void Authenticate::Swap(Authenticate* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Authenticate::InternalSwap(Authenticate* other) {
  using std::swap;
  user_.Swap(&other->user_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  pass_.Swap(&other->pass_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string Authenticate::GetTypeName() const {
  return "Authenticate";
}


// ===================================================================

void CommonResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CommonResponse::kResultFieldNumber;
const int CommonResponse::kInfoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CommonResponse::CommonResponse()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_messages_2eproto::scc_info_CommonResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:CommonResponse)
}
CommonResponse::CommonResponse(const CommonResponse& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  info_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.info().size() > 0) {
    info_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.info_);
  }
  result_ = from.result_;
  // @@protoc_insertion_point(copy_constructor:CommonResponse)
}

void CommonResponse::SharedCtor() {
  info_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  result_ = 0;
}

CommonResponse::~CommonResponse() {
  // @@protoc_insertion_point(destructor:CommonResponse)
  SharedDtor();
}

void CommonResponse::SharedDtor() {
  info_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CommonResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CommonResponse& CommonResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_messages_2eproto::scc_info_CommonResponse.base);
  return *internal_default_instance();
}


void CommonResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:CommonResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  info_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  result_ = 0;
  _internal_metadata_.Clear();
}

bool CommonResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:CommonResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .CommonResponse.Result result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_result(static_cast< ::CommonResponse_Result >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string info = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_info()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->info().data(), static_cast<int>(this->info().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "CommonResponse.info"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CommonResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CommonResponse)
  return false;
#undef DO_
}

void CommonResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CommonResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .CommonResponse.Result result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->result(), output);
  }

  // string info = 2;
  if (this->info().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->info().data(), static_cast<int>(this->info().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CommonResponse.info");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->info(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:CommonResponse)
}

size_t CommonResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CommonResponse)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string info = 2;
  if (this->info().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->info());
  }

  // .CommonResponse.Result result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->result());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CommonResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const CommonResponse*>(&from));
}

void CommonResponse::MergeFrom(const CommonResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CommonResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.info().size() > 0) {

    info_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.info_);
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
}

void CommonResponse::CopyFrom(const CommonResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CommonResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonResponse::IsInitialized() const {
  return true;
}

void CommonResponse::Swap(CommonResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CommonResponse::InternalSwap(CommonResponse* other) {
  using std::swap;
  info_.Swap(&other->info_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(result_, other->result_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string CommonResponse::GetTypeName() const {
  return "CommonResponse";
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::CreateUser* Arena::CreateMaybeMessage< ::CreateUser >(Arena* arena) {
  return Arena::CreateInternal< ::CreateUser >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Authenticate* Arena::CreateMaybeMessage< ::Authenticate >(Arena* arena) {
  return Arena::CreateInternal< ::Authenticate >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::CommonResponse* Arena::CreateMaybeMessage< ::CommonResponse >(Arena* arena) {
  return Arena::CreateInternal< ::CommonResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
