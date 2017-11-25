// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/rpc_dump.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "brpc/rpc_dump.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace brpc {

namespace {

const ::google::protobuf::Descriptor* RpcDumpMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcDumpMeta_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_brpc_2frpc_5fdump_2eproto() {
  protobuf_AddDesc_brpc_2frpc_5fdump_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "brpc/rpc_dump.proto");
  GOOGLE_CHECK(file != NULL);
  RpcDumpMeta_descriptor_ = file->message_type(0);
  static const int RpcDumpMeta_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, service_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, method_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, method_index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, compress_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, protocol_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, attachment_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, authentication_data_),
  };
  RpcDumpMeta_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RpcDumpMeta_descriptor_,
      RpcDumpMeta::default_instance_,
      RpcDumpMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RpcDumpMeta));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_brpc_2frpc_5fdump_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RpcDumpMeta_descriptor_, &RpcDumpMeta::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_brpc_2frpc_5fdump_2eproto() {
  delete RpcDumpMeta::default_instance_;
  delete RpcDumpMeta_reflection_;
}

void protobuf_AddDesc_brpc_2frpc_5fdump_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::brpc::protobuf_AddDesc_brpc_2foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023brpc/rpc_dump.proto\022\004brpc\032\022brpc/option"
    "s.proto\"\332\001\n\013RpcDumpMeta\022\024\n\014service_name\030"
    "\001 \001(\t\022\023\n\013method_name\030\002 \001(\t\022\024\n\014method_ind"
    "ex\030\003 \001(\005\022)\n\rcompress_type\030\004 \001(\0162\022.brpc.C"
    "ompressType\022)\n\rprotocol_type\030\005 \001(\0162\022.brp"
    "c.ProtocolType\022\027\n\017attachment_size\030\006 \001(\005\022"
    "\033\n\023authentication_data\030\007 \001(\014", 268);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "brpc/rpc_dump.proto", &protobuf_RegisterTypes);
  RpcDumpMeta::default_instance_ = new RpcDumpMeta();
  RpcDumpMeta::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_brpc_2frpc_5fdump_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_brpc_2frpc_5fdump_2eproto {
  StaticDescriptorInitializer_brpc_2frpc_5fdump_2eproto() {
    protobuf_AddDesc_brpc_2frpc_5fdump_2eproto();
  }
} static_descriptor_initializer_brpc_2frpc_5fdump_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RpcDumpMeta::kServiceNameFieldNumber;
const int RpcDumpMeta::kMethodNameFieldNumber;
const int RpcDumpMeta::kMethodIndexFieldNumber;
const int RpcDumpMeta::kCompressTypeFieldNumber;
const int RpcDumpMeta::kProtocolTypeFieldNumber;
const int RpcDumpMeta::kAttachmentSizeFieldNumber;
const int RpcDumpMeta::kAuthenticationDataFieldNumber;
#endif  // !_MSC_VER

RpcDumpMeta::RpcDumpMeta()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:brpc.RpcDumpMeta)
}

void RpcDumpMeta::InitAsDefaultInstance() {
}

RpcDumpMeta::RpcDumpMeta(const RpcDumpMeta& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:brpc.RpcDumpMeta)
}

void RpcDumpMeta::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  service_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_index_ = 0;
  compress_type_ = 0;
  protocol_type_ = 0;
  attachment_size_ = 0;
  authentication_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RpcDumpMeta::~RpcDumpMeta() {
  // @@protoc_insertion_point(destructor:brpc.RpcDumpMeta)
  SharedDtor();
}

void RpcDumpMeta::SharedDtor() {
  if (service_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete service_name_;
  }
  if (method_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete method_name_;
  }
  if (authentication_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete authentication_data_;
  }
  if (this != default_instance_) {
  }
}

void RpcDumpMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcDumpMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcDumpMeta_descriptor_;
}

const RpcDumpMeta& RpcDumpMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_brpc_2frpc_5fdump_2eproto();
  return *default_instance_;
}

RpcDumpMeta* RpcDumpMeta::default_instance_ = NULL;

RpcDumpMeta* RpcDumpMeta::New() const {
  return new RpcDumpMeta;
}

void RpcDumpMeta::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<RpcDumpMeta*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 127) {
    ZR_(method_index_, attachment_size_);
    if (has_service_name()) {
      if (service_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        service_name_->clear();
      }
    }
    if (has_method_name()) {
      if (method_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        method_name_->clear();
      }
    }
    if (has_authentication_data()) {
      if (authentication_data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        authentication_data_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RpcDumpMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:brpc.RpcDumpMeta)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string service_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_service_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->service_name().data(), this->service_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "service_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_method_name;
        break;
      }

      // optional string method_name = 2;
      case 2: {
        if (tag == 18) {
         parse_method_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->method_name().data(), this->method_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "method_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_method_index;
        break;
      }

      // optional int32 method_index = 3;
      case 3: {
        if (tag == 24) {
         parse_method_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &method_index_)));
          set_has_method_index();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_compress_type;
        break;
      }

      // optional .brpc.CompressType compress_type = 4;
      case 4: {
        if (tag == 32) {
         parse_compress_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::brpc::CompressType_IsValid(value)) {
            set_compress_type(static_cast< ::brpc::CompressType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_protocol_type;
        break;
      }

      // optional .brpc.ProtocolType protocol_type = 5;
      case 5: {
        if (tag == 40) {
         parse_protocol_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::brpc::ProtocolType_IsValid(value)) {
            set_protocol_type(static_cast< ::brpc::ProtocolType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(5, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_attachment_size;
        break;
      }

      // optional int32 attachment_size = 6;
      case 6: {
        if (tag == 48) {
         parse_attachment_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &attachment_size_)));
          set_has_attachment_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_authentication_data;
        break;
      }

      // optional bytes authentication_data = 7;
      case 7: {
        if (tag == 58) {
         parse_authentication_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_authentication_data()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:brpc.RpcDumpMeta)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:brpc.RpcDumpMeta)
  return false;
#undef DO_
}

void RpcDumpMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:brpc.RpcDumpMeta)
  // optional string service_name = 1;
  if (has_service_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->service_name().data(), this->service_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "service_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->service_name(), output);
  }

  // optional string method_name = 2;
  if (has_method_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method_name().data(), this->method_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "method_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->method_name(), output);
  }

  // optional int32 method_index = 3;
  if (has_method_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->method_index(), output);
  }

  // optional .brpc.CompressType compress_type = 4;
  if (has_compress_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->compress_type(), output);
  }

  // optional .brpc.ProtocolType protocol_type = 5;
  if (has_protocol_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->protocol_type(), output);
  }

  // optional int32 attachment_size = 6;
  if (has_attachment_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->attachment_size(), output);
  }

  // optional bytes authentication_data = 7;
  if (has_authentication_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      7, this->authentication_data(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:brpc.RpcDumpMeta)
}

::google::protobuf::uint8* RpcDumpMeta::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.RpcDumpMeta)
  // optional string service_name = 1;
  if (has_service_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->service_name().data(), this->service_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "service_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->service_name(), target);
  }

  // optional string method_name = 2;
  if (has_method_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method_name().data(), this->method_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "method_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->method_name(), target);
  }

  // optional int32 method_index = 3;
  if (has_method_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->method_index(), target);
  }

  // optional .brpc.CompressType compress_type = 4;
  if (has_compress_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->compress_type(), target);
  }

  // optional .brpc.ProtocolType protocol_type = 5;
  if (has_protocol_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->protocol_type(), target);
  }

  // optional int32 attachment_size = 6;
  if (has_attachment_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->attachment_size(), target);
  }

  // optional bytes authentication_data = 7;
  if (has_authentication_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        7, this->authentication_data(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.RpcDumpMeta)
  return target;
}

int RpcDumpMeta::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string service_name = 1;
    if (has_service_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->service_name());
    }

    // optional string method_name = 2;
    if (has_method_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->method_name());
    }

    // optional int32 method_index = 3;
    if (has_method_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->method_index());
    }

    // optional .brpc.CompressType compress_type = 4;
    if (has_compress_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->compress_type());
    }

    // optional .brpc.ProtocolType protocol_type = 5;
    if (has_protocol_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->protocol_type());
    }

    // optional int32 attachment_size = 6;
    if (has_attachment_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->attachment_size());
    }

    // optional bytes authentication_data = 7;
    if (has_authentication_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->authentication_data());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RpcDumpMeta::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RpcDumpMeta* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RpcDumpMeta*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RpcDumpMeta::MergeFrom(const RpcDumpMeta& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_service_name()) {
      set_service_name(from.service_name());
    }
    if (from.has_method_name()) {
      set_method_name(from.method_name());
    }
    if (from.has_method_index()) {
      set_method_index(from.method_index());
    }
    if (from.has_compress_type()) {
      set_compress_type(from.compress_type());
    }
    if (from.has_protocol_type()) {
      set_protocol_type(from.protocol_type());
    }
    if (from.has_attachment_size()) {
      set_attachment_size(from.attachment_size());
    }
    if (from.has_authentication_data()) {
      set_authentication_data(from.authentication_data());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RpcDumpMeta::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcDumpMeta::CopyFrom(const RpcDumpMeta& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcDumpMeta::IsInitialized() const {

  return true;
}

void RpcDumpMeta::Swap(RpcDumpMeta* other) {
  if (other != this) {
    std::swap(service_name_, other->service_name_);
    std::swap(method_name_, other->method_name_);
    std::swap(method_index_, other->method_index_);
    std::swap(compress_type_, other->compress_type_);
    std::swap(protocol_type_, other->protocol_type_);
    std::swap(attachment_size_, other->attachment_size_);
    std::swap(authentication_data_, other->authentication_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RpcDumpMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcDumpMeta_descriptor_;
  metadata.reflection = RpcDumpMeta_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace brpc

// @@protoc_insertion_point(global_scope)
