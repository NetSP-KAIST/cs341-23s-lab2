// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/track_descriptor.proto

#include "protos/perfetto/trace/track_event/track_descriptor.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace perfetto {
namespace protos {
PROTOBUF_CONSTEXPR TrackDescriptor::TrackDescriptor(
    ::_pbi::ConstantInitialized)
  : name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , process_(nullptr)
  , thread_(nullptr)
  , chrome_process_(nullptr)
  , chrome_thread_(nullptr)
  , counter_(nullptr)
  , uuid_(uint64_t{0u})
  , parent_uuid_(uint64_t{0u}){}
struct TrackDescriptorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TrackDescriptorDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TrackDescriptorDefaultTypeInternal() {}
  union {
    TrackDescriptor _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TrackDescriptorDefaultTypeInternal _TrackDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class TrackDescriptor::_Internal {
 public:
  using HasBits = decltype(std::declval<TrackDescriptor>()._has_bits_);
  static void set_has_uuid(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_parent_uuid(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::perfetto::protos::ProcessDescriptor& process(const TrackDescriptor* msg);
  static void set_has_process(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::perfetto::protos::ChromeProcessDescriptor& chrome_process(const TrackDescriptor* msg);
  static void set_has_chrome_process(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::perfetto::protos::ThreadDescriptor& thread(const TrackDescriptor* msg);
  static void set_has_thread(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::perfetto::protos::ChromeThreadDescriptor& chrome_thread(const TrackDescriptor* msg);
  static void set_has_chrome_thread(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static const ::perfetto::protos::CounterDescriptor& counter(const TrackDescriptor* msg);
  static void set_has_counter(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

const ::perfetto::protos::ProcessDescriptor&
TrackDescriptor::_Internal::process(const TrackDescriptor* msg) {
  return *msg->process_;
}
const ::perfetto::protos::ChromeProcessDescriptor&
TrackDescriptor::_Internal::chrome_process(const TrackDescriptor* msg) {
  return *msg->chrome_process_;
}
const ::perfetto::protos::ThreadDescriptor&
TrackDescriptor::_Internal::thread(const TrackDescriptor* msg) {
  return *msg->thread_;
}
const ::perfetto::protos::ChromeThreadDescriptor&
TrackDescriptor::_Internal::chrome_thread(const TrackDescriptor* msg) {
  return *msg->chrome_thread_;
}
const ::perfetto::protos::CounterDescriptor&
TrackDescriptor::_Internal::counter(const TrackDescriptor* msg) {
  return *msg->counter_;
}
void TrackDescriptor::clear_process() {
  if (process_ != nullptr) process_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void TrackDescriptor::clear_chrome_process() {
  if (chrome_process_ != nullptr) chrome_process_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void TrackDescriptor::clear_thread() {
  if (thread_ != nullptr) thread_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void TrackDescriptor::clear_chrome_thread() {
  if (chrome_thread_ != nullptr) chrome_thread_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
void TrackDescriptor::clear_counter() {
  if (counter_ != nullptr) counter_->Clear();
  _has_bits_[0] &= ~0x00000020u;
}
TrackDescriptor::TrackDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.TrackDescriptor)
}
TrackDescriptor::TrackDescriptor(const TrackDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    name_.Set(from._internal_name(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_process()) {
    process_ = new ::perfetto::protos::ProcessDescriptor(*from.process_);
  } else {
    process_ = nullptr;
  }
  if (from._internal_has_thread()) {
    thread_ = new ::perfetto::protos::ThreadDescriptor(*from.thread_);
  } else {
    thread_ = nullptr;
  }
  if (from._internal_has_chrome_process()) {
    chrome_process_ = new ::perfetto::protos::ChromeProcessDescriptor(*from.chrome_process_);
  } else {
    chrome_process_ = nullptr;
  }
  if (from._internal_has_chrome_thread()) {
    chrome_thread_ = new ::perfetto::protos::ChromeThreadDescriptor(*from.chrome_thread_);
  } else {
    chrome_thread_ = nullptr;
  }
  if (from._internal_has_counter()) {
    counter_ = new ::perfetto::protos::CounterDescriptor(*from.counter_);
  } else {
    counter_ = nullptr;
  }
  ::memcpy(&uuid_, &from.uuid_,
    static_cast<size_t>(reinterpret_cast<char*>(&parent_uuid_) -
    reinterpret_cast<char*>(&uuid_)) + sizeof(parent_uuid_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TrackDescriptor)
}

inline void TrackDescriptor::SharedCtor() {
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&process_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&parent_uuid_) -
    reinterpret_cast<char*>(&process_)) + sizeof(parent_uuid_));
}

TrackDescriptor::~TrackDescriptor() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TrackDescriptor)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TrackDescriptor::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.Destroy();
  if (this != internal_default_instance()) delete process_;
  if (this != internal_default_instance()) delete thread_;
  if (this != internal_default_instance()) delete chrome_process_;
  if (this != internal_default_instance()) delete chrome_thread_;
  if (this != internal_default_instance()) delete counter_;
}

void TrackDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TrackDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TrackDescriptor)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(process_ != nullptr);
      process_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(thread_ != nullptr);
      thread_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(chrome_process_ != nullptr);
      chrome_process_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(chrome_thread_ != nullptr);
      chrome_thread_->Clear();
    }
    if (cached_has_bits & 0x00000020u) {
      GOOGLE_DCHECK(counter_ != nullptr);
      counter_->Clear();
    }
  }
  if (cached_has_bits & 0x000000c0u) {
    ::memset(&uuid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&parent_uuid_) -
        reinterpret_cast<char*>(&uuid_)) + sizeof(parent_uuid_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* TrackDescriptor::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 uuid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_uuid(&has_bits);
          uuid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.ProcessDescriptor process = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_process(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.ThreadDescriptor thread = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_thread(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 parent_uuid = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_parent_uuid(&has_bits);
          parent_uuid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.ChromeProcessDescriptor chrome_process = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_chrome_process(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.ChromeThreadDescriptor chrome_thread = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_chrome_thread(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.CounterDescriptor counter = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_counter(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* TrackDescriptor::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.TrackDescriptor)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 uuid = 1;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(1, this->_internal_uuid(), target);
  }

  // optional string name = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  // optional .perfetto.protos.ProcessDescriptor process = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::process(this),
        _Internal::process(this).GetCachedSize(), target, stream);
  }

  // optional .perfetto.protos.ThreadDescriptor thread = 4;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::thread(this),
        _Internal::thread(this).GetCachedSize(), target, stream);
  }

  // optional uint64 parent_uuid = 5;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(5, this->_internal_parent_uuid(), target);
  }

  // optional .perfetto.protos.ChromeProcessDescriptor chrome_process = 6;
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, _Internal::chrome_process(this),
        _Internal::chrome_process(this).GetCachedSize(), target, stream);
  }

  // optional .perfetto.protos.ChromeThreadDescriptor chrome_thread = 7;
  if (cached_has_bits & 0x00000010u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(7, _Internal::chrome_thread(this),
        _Internal::chrome_thread(this).GetCachedSize(), target, stream);
  }

  // optional .perfetto.protos.CounterDescriptor counter = 8;
  if (cached_has_bits & 0x00000020u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(8, _Internal::counter(this),
        _Internal::counter(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.TrackDescriptor)
  return target;
}

size_t TrackDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TrackDescriptor)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string name = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional .perfetto.protos.ProcessDescriptor process = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *process_);
    }

    // optional .perfetto.protos.ThreadDescriptor thread = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *thread_);
    }

    // optional .perfetto.protos.ChromeProcessDescriptor chrome_process = 6;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *chrome_process_);
    }

    // optional .perfetto.protos.ChromeThreadDescriptor chrome_thread = 7;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *chrome_thread_);
    }

    // optional .perfetto.protos.CounterDescriptor counter = 8;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *counter_);
    }

    // optional uint64 uuid = 1;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_uuid());
    }

    // optional uint64 parent_uuid = 5;
    if (cached_has_bits & 0x00000080u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_parent_uuid());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TrackDescriptor::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const TrackDescriptor*>(
      &from));
}

void TrackDescriptor::MergeFrom(const TrackDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TrackDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_process()->::perfetto::protos::ProcessDescriptor::MergeFrom(from._internal_process());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_thread()->::perfetto::protos::ThreadDescriptor::MergeFrom(from._internal_thread());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_chrome_process()->::perfetto::protos::ChromeProcessDescriptor::MergeFrom(from._internal_chrome_process());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_mutable_chrome_thread()->::perfetto::protos::ChromeThreadDescriptor::MergeFrom(from._internal_chrome_thread());
    }
    if (cached_has_bits & 0x00000020u) {
      _internal_mutable_counter()->::perfetto::protos::CounterDescriptor::MergeFrom(from._internal_counter());
    }
    if (cached_has_bits & 0x00000040u) {
      uuid_ = from.uuid_;
    }
    if (cached_has_bits & 0x00000080u) {
      parent_uuid_ = from.parent_uuid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void TrackDescriptor::CopyFrom(const TrackDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TrackDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrackDescriptor::IsInitialized() const {
  return true;
}

void TrackDescriptor::InternalSwap(TrackDescriptor* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TrackDescriptor, parent_uuid_)
      + sizeof(TrackDescriptor::parent_uuid_)
      - PROTOBUF_FIELD_OFFSET(TrackDescriptor, process_)>(
          reinterpret_cast<char*>(&process_),
          reinterpret_cast<char*>(&other->process_));
}

std::string TrackDescriptor::GetTypeName() const {
  return "perfetto.protos.TrackDescriptor";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::TrackDescriptor*
Arena::CreateMaybeMessage< ::perfetto::protos::TrackDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::TrackDescriptor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>