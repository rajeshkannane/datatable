// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_JAY_JAY_H_
#define FLATBUFFERS_GENERATED_JAY_JAY_H_

#include "lib/flatbuffers/flatbuffers.h"

namespace jay {

struct Type;
struct TypeBuilder;

struct StatsBool;

struct StatsInt8;

struct StatsInt16;

struct StatsInt32;

struct StatsInt64;

struct StatsFloat32;

struct StatsFloat64;

struct Frame;
struct FrameBuilder;

struct Column;
struct ColumnBuilder;

struct Buffer;

enum SType {
  SType_Bool8 = 0,
  SType_Int8 = 1,
  SType_Int16 = 2,
  SType_Int32 = 3,
  SType_Int64 = 4,
  SType_Float32 = 5,
  SType_Float64 = 6,
  SType_Str32 = 7,
  SType_Str64 = 8,
  SType_Date32 = 9,
  SType_Time64 = 10,
  SType_Void0 = 11,
  SType_Arr32 = 12,
  SType_Arr64 = 13,
  SType_MIN = SType_Bool8,
  SType_MAX = SType_Arr64
};

inline const SType (&EnumValuesSType())[14] {
  static const SType values[] = {
    SType_Bool8,
    SType_Int8,
    SType_Int16,
    SType_Int32,
    SType_Int64,
    SType_Float32,
    SType_Float64,
    SType_Str32,
    SType_Str64,
    SType_Date32,
    SType_Time64,
    SType_Void0,
    SType_Arr32,
    SType_Arr64
  };
  return values;
}

inline const char * const *EnumNamesSType() {
  static const char * const names[15] = {
    "Bool8",
    "Int8",
    "Int16",
    "Int32",
    "Int64",
    "Float32",
    "Float64",
    "Str32",
    "Str64",
    "Date32",
    "Time64",
    "Void0",
    "Arr32",
    "Arr64",
    nullptr
  };
  return names;
}

inline const char *EnumNameSType(SType e) {
  if (flatbuffers::IsOutRange(e, SType_Bool8, SType_Arr64)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesSType()[index];
}

enum TypeExtra {
  TypeExtra_NONE = 0,
  TypeExtra_child = 1,
  TypeExtra_MIN = TypeExtra_NONE,
  TypeExtra_MAX = TypeExtra_child
};

inline const TypeExtra (&EnumValuesTypeExtra())[2] {
  static const TypeExtra values[] = {
    TypeExtra_NONE,
    TypeExtra_child
  };
  return values;
}

inline const char * const *EnumNamesTypeExtra() {
  static const char * const names[3] = {
    "NONE",
    "child",
    nullptr
  };
  return names;
}

inline const char *EnumNameTypeExtra(TypeExtra e) {
  if (flatbuffers::IsOutRange(e, TypeExtra_NONE, TypeExtra_child)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesTypeExtra()[index];
}

template<typename T> struct TypeExtraTraits {
  static const TypeExtra enum_value = TypeExtra_NONE;
};

template<> struct TypeExtraTraits<jay::Type> {
  static const TypeExtra enum_value = TypeExtra_child;
};

bool VerifyTypeExtra(flatbuffers::Verifier &verifier, const void *obj, TypeExtra type);
bool VerifyTypeExtraVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

enum Stats {
  Stats_NONE = 0,
  Stats_Bool = 1,
  Stats_Int8 = 2,
  Stats_Int16 = 3,
  Stats_Int32 = 4,
  Stats_Int64 = 5,
  Stats_Float32 = 6,
  Stats_Float64 = 7,
  Stats_MIN = Stats_NONE,
  Stats_MAX = Stats_Float64
};

inline const Stats (&EnumValuesStats())[8] {
  static const Stats values[] = {
    Stats_NONE,
    Stats_Bool,
    Stats_Int8,
    Stats_Int16,
    Stats_Int32,
    Stats_Int64,
    Stats_Float32,
    Stats_Float64
  };
  return values;
}

inline const char * const *EnumNamesStats() {
  static const char * const names[9] = {
    "NONE",
    "Bool",
    "Int8",
    "Int16",
    "Int32",
    "Int64",
    "Float32",
    "Float64",
    nullptr
  };
  return names;
}

inline const char *EnumNameStats(Stats e) {
  if (flatbuffers::IsOutRange(e, Stats_NONE, Stats_Float64)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesStats()[index];
}

template<typename T> struct StatsTraits {
  static const Stats enum_value = Stats_NONE;
};

template<> struct StatsTraits<jay::StatsBool> {
  static const Stats enum_value = Stats_Bool;
};

template<> struct StatsTraits<jay::StatsInt8> {
  static const Stats enum_value = Stats_Int8;
};

template<> struct StatsTraits<jay::StatsInt16> {
  static const Stats enum_value = Stats_Int16;
};

template<> struct StatsTraits<jay::StatsInt32> {
  static const Stats enum_value = Stats_Int32;
};

template<> struct StatsTraits<jay::StatsInt64> {
  static const Stats enum_value = Stats_Int64;
};

template<> struct StatsTraits<jay::StatsFloat32> {
  static const Stats enum_value = Stats_Float32;
};

template<> struct StatsTraits<jay::StatsFloat64> {
  static const Stats enum_value = Stats_Float64;
};

bool VerifyStats(flatbuffers::Verifier &verifier, const void *obj, Stats type);
bool VerifyStatsVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) StatsBool FLATBUFFERS_FINAL_CLASS {
 private:
  int8_t min_;
  int8_t max_;

 public:
  StatsBool() {
    memset(static_cast<void *>(this), 0, sizeof(StatsBool));
  }
  StatsBool(int8_t _min, int8_t _max)
      : min_(flatbuffers::EndianScalar(_min)),
        max_(flatbuffers::EndianScalar(_max)) {
  }
  int8_t min() const {
    return flatbuffers::EndianScalar(min_);
  }
  int8_t max() const {
    return flatbuffers::EndianScalar(max_);
  }
};
FLATBUFFERS_STRUCT_END(StatsBool, 2);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) StatsInt8 FLATBUFFERS_FINAL_CLASS {
 private:
  int8_t min_;
  int8_t max_;

 public:
  StatsInt8() {
    memset(static_cast<void *>(this), 0, sizeof(StatsInt8));
  }
  StatsInt8(int8_t _min, int8_t _max)
      : min_(flatbuffers::EndianScalar(_min)),
        max_(flatbuffers::EndianScalar(_max)) {
  }
  int8_t min() const {
    return flatbuffers::EndianScalar(min_);
  }
  int8_t max() const {
    return flatbuffers::EndianScalar(max_);
  }
};
FLATBUFFERS_STRUCT_END(StatsInt8, 2);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(2) StatsInt16 FLATBUFFERS_FINAL_CLASS {
 private:
  int16_t min_;
  int16_t max_;

 public:
  StatsInt16() {
    memset(static_cast<void *>(this), 0, sizeof(StatsInt16));
  }
  StatsInt16(int16_t _min, int16_t _max)
      : min_(flatbuffers::EndianScalar(_min)),
        max_(flatbuffers::EndianScalar(_max)) {
  }
  int16_t min() const {
    return flatbuffers::EndianScalar(min_);
  }
  int16_t max() const {
    return flatbuffers::EndianScalar(max_);
  }
};
FLATBUFFERS_STRUCT_END(StatsInt16, 4);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) StatsInt32 FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t min_;
  int32_t max_;

 public:
  StatsInt32() {
    memset(static_cast<void *>(this), 0, sizeof(StatsInt32));
  }
  StatsInt32(int32_t _min, int32_t _max)
      : min_(flatbuffers::EndianScalar(_min)),
        max_(flatbuffers::EndianScalar(_max)) {
  }
  int32_t min() const {
    return flatbuffers::EndianScalar(min_);
  }
  int32_t max() const {
    return flatbuffers::EndianScalar(max_);
  }
};
FLATBUFFERS_STRUCT_END(StatsInt32, 8);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) StatsInt64 FLATBUFFERS_FINAL_CLASS {
 private:
  int64_t min_;
  int64_t max_;

 public:
  StatsInt64() {
    memset(static_cast<void *>(this), 0, sizeof(StatsInt64));
  }
  StatsInt64(int64_t _min, int64_t _max)
      : min_(flatbuffers::EndianScalar(_min)),
        max_(flatbuffers::EndianScalar(_max)) {
  }
  int64_t min() const {
    return flatbuffers::EndianScalar(min_);
  }
  int64_t max() const {
    return flatbuffers::EndianScalar(max_);
  }
};
FLATBUFFERS_STRUCT_END(StatsInt64, 16);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) StatsFloat32 FLATBUFFERS_FINAL_CLASS {
 private:
  float min_;
  float max_;

 public:
  StatsFloat32() {
    memset(static_cast<void *>(this), 0, sizeof(StatsFloat32));
  }
  StatsFloat32(float _min, float _max)
      : min_(flatbuffers::EndianScalar(_min)),
        max_(flatbuffers::EndianScalar(_max)) {
  }
  float min() const {
    return flatbuffers::EndianScalar(min_);
  }
  float max() const {
    return flatbuffers::EndianScalar(max_);
  }
};
FLATBUFFERS_STRUCT_END(StatsFloat32, 8);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) StatsFloat64 FLATBUFFERS_FINAL_CLASS {
 private:
  double min_;
  double max_;

 public:
  StatsFloat64() {
    memset(static_cast<void *>(this), 0, sizeof(StatsFloat64));
  }
  StatsFloat64(double _min, double _max)
      : min_(flatbuffers::EndianScalar(_min)),
        max_(flatbuffers::EndianScalar(_max)) {
  }
  double min() const {
    return flatbuffers::EndianScalar(min_);
  }
  double max() const {
    return flatbuffers::EndianScalar(max_);
  }
};
FLATBUFFERS_STRUCT_END(StatsFloat64, 16);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(8) Buffer FLATBUFFERS_FINAL_CLASS {
 private:
  uint64_t offset_;
  uint64_t length_;

 public:
  Buffer() {
    memset(static_cast<void *>(this), 0, sizeof(Buffer));
  }
  Buffer(uint64_t _offset, uint64_t _length)
      : offset_(flatbuffers::EndianScalar(_offset)),
        length_(flatbuffers::EndianScalar(_length)) {
  }
  uint64_t offset() const {
    return flatbuffers::EndianScalar(offset_);
  }
  uint64_t length() const {
    return flatbuffers::EndianScalar(length_);
  }
};
FLATBUFFERS_STRUCT_END(Buffer, 16);

struct Type FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TypeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_STYPE = 4,
    VT_EXTRA_TYPE = 6,
    VT_EXTRA = 8
  };
  jay::SType stype() const {
    return static_cast<jay::SType>(GetField<uint8_t>(VT_STYPE, 0));
  }
  jay::TypeExtra extra_type() const {
    return static_cast<jay::TypeExtra>(GetField<uint8_t>(VT_EXTRA_TYPE, 0));
  }
  const void *extra() const {
    return GetPointer<const void *>(VT_EXTRA);
  }
  template<typename T> const T *extra_as() const;
  const jay::Type *extra_as_child() const {
    return extra_type() == jay::TypeExtra_child ? static_cast<const jay::Type *>(extra()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_STYPE) &&
           VerifyField<uint8_t>(verifier, VT_EXTRA_TYPE) &&
           VerifyOffset(verifier, VT_EXTRA) &&
           VerifyTypeExtra(verifier, extra(), extra_type()) &&
           verifier.EndTable();
  }
};

template<> inline const jay::Type *Type::extra_as<jay::Type>() const {
  return extra_as_child();
}

struct TypeBuilder {
  typedef Type Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_stype(jay::SType stype) {
    fbb_.AddElement<uint8_t>(Type::VT_STYPE, static_cast<uint8_t>(stype), 0);
  }
  void add_extra_type(jay::TypeExtra extra_type) {
    fbb_.AddElement<uint8_t>(Type::VT_EXTRA_TYPE, static_cast<uint8_t>(extra_type), 0);
  }
  void add_extra(flatbuffers::Offset<void> extra) {
    fbb_.AddOffset(Type::VT_EXTRA, extra);
  }
  explicit TypeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TypeBuilder &operator=(const TypeBuilder &);
  flatbuffers::Offset<Type> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Type>(end);
    return o;
  }
};

inline flatbuffers::Offset<Type> CreateType(
    flatbuffers::FlatBufferBuilder &_fbb,
    jay::SType stype = jay::SType_Bool8,
    jay::TypeExtra extra_type = jay::TypeExtra_NONE,
    flatbuffers::Offset<void> extra = 0) {
  TypeBuilder builder_(_fbb);
  builder_.add_extra(extra);
  builder_.add_extra_type(extra_type);
  builder_.add_stype(stype);
  return builder_.Finish();
}

struct Frame FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FrameBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NROWS = 4,
    VT_NCOLS = 6,
    VT_NKEYS = 8,
    VT_COLUMNS = 10
  };
  uint64_t nrows() const {
    return GetField<uint64_t>(VT_NROWS, 0);
  }
  uint64_t ncols() const {
    return GetField<uint64_t>(VT_NCOLS, 0);
  }
  int32_t nkeys() const {
    return GetField<int32_t>(VT_NKEYS, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<jay::Column>> *columns() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<jay::Column>> *>(VT_COLUMNS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_NROWS) &&
           VerifyField<uint64_t>(verifier, VT_NCOLS) &&
           VerifyField<int32_t>(verifier, VT_NKEYS) &&
           VerifyOffset(verifier, VT_COLUMNS) &&
           verifier.VerifyVector(columns()) &&
           verifier.VerifyVectorOfTables(columns()) &&
           verifier.EndTable();
  }
};

struct FrameBuilder {
  typedef Frame Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_nrows(uint64_t nrows) {
    fbb_.AddElement<uint64_t>(Frame::VT_NROWS, nrows, 0);
  }
  void add_ncols(uint64_t ncols) {
    fbb_.AddElement<uint64_t>(Frame::VT_NCOLS, ncols, 0);
  }
  void add_nkeys(int32_t nkeys) {
    fbb_.AddElement<int32_t>(Frame::VT_NKEYS, nkeys, 0);
  }
  void add_columns(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<jay::Column>>> columns) {
    fbb_.AddOffset(Frame::VT_COLUMNS, columns);
  }
  explicit FrameBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FrameBuilder &operator=(const FrameBuilder &);
  flatbuffers::Offset<Frame> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Frame>(end);
    return o;
  }
};

inline flatbuffers::Offset<Frame> CreateFrame(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t nrows = 0,
    uint64_t ncols = 0,
    int32_t nkeys = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<jay::Column>>> columns = 0) {
  FrameBuilder builder_(_fbb);
  builder_.add_ncols(ncols);
  builder_.add_nrows(nrows);
  builder_.add_columns(columns);
  builder_.add_nkeys(nkeys);
  return builder_.Finish();
}

inline flatbuffers::Offset<Frame> CreateFrameDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t nrows = 0,
    uint64_t ncols = 0,
    int32_t nkeys = 0,
    const std::vector<flatbuffers::Offset<jay::Column>> *columns = nullptr) {
  auto columns__ = columns ? _fbb.CreateVector<flatbuffers::Offset<jay::Column>>(*columns) : 0;
  return jay::CreateFrame(
      _fbb,
      nrows,
      ncols,
      nkeys,
      columns__);
}

struct Column FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ColumnBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_STYPE = 4,
    VT_DATA = 6,
    VT_STRDATA = 8,
    VT_NAME = 10,
    VT_NULLCOUNT = 12,
    VT_STATS_TYPE = 14,
    VT_STATS = 16,
    VT_TYPE = 18,
    VT_NROWS = 20,
    VT_BUFFERS = 22,
    VT_CHILDREN = 24
  };
  jay::SType stype() const {
    return static_cast<jay::SType>(GetField<uint8_t>(VT_STYPE, 0));
  }
  const jay::Buffer *data() const {
    return GetStruct<const jay::Buffer *>(VT_DATA);
  }
  const jay::Buffer *strdata() const {
    return GetStruct<const jay::Buffer *>(VT_STRDATA);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  uint64_t nullcount() const {
    return GetField<uint64_t>(VT_NULLCOUNT, 0);
  }
  jay::Stats stats_type() const {
    return static_cast<jay::Stats>(GetField<uint8_t>(VT_STATS_TYPE, 0));
  }
  const void *stats() const {
    return GetPointer<const void *>(VT_STATS);
  }
  template<typename T> const T *stats_as() const;
  const jay::StatsBool *stats_as_Bool() const {
    return stats_type() == jay::Stats_Bool ? static_cast<const jay::StatsBool *>(stats()) : nullptr;
  }
  const jay::StatsInt8 *stats_as_Int8() const {
    return stats_type() == jay::Stats_Int8 ? static_cast<const jay::StatsInt8 *>(stats()) : nullptr;
  }
  const jay::StatsInt16 *stats_as_Int16() const {
    return stats_type() == jay::Stats_Int16 ? static_cast<const jay::StatsInt16 *>(stats()) : nullptr;
  }
  const jay::StatsInt32 *stats_as_Int32() const {
    return stats_type() == jay::Stats_Int32 ? static_cast<const jay::StatsInt32 *>(stats()) : nullptr;
  }
  const jay::StatsInt64 *stats_as_Int64() const {
    return stats_type() == jay::Stats_Int64 ? static_cast<const jay::StatsInt64 *>(stats()) : nullptr;
  }
  const jay::StatsFloat32 *stats_as_Float32() const {
    return stats_type() == jay::Stats_Float32 ? static_cast<const jay::StatsFloat32 *>(stats()) : nullptr;
  }
  const jay::StatsFloat64 *stats_as_Float64() const {
    return stats_type() == jay::Stats_Float64 ? static_cast<const jay::StatsFloat64 *>(stats()) : nullptr;
  }
  const jay::Type *type() const {
    return GetPointer<const jay::Type *>(VT_TYPE);
  }
  uint64_t nrows() const {
    return GetField<uint64_t>(VT_NROWS, 0);
  }
  const flatbuffers::Vector<const jay::Buffer *> *buffers() const {
    return GetPointer<const flatbuffers::Vector<const jay::Buffer *> *>(VT_BUFFERS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<jay::Column>> *children() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<jay::Column>> *>(VT_CHILDREN);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_STYPE) &&
           VerifyField<jay::Buffer>(verifier, VT_DATA) &&
           VerifyField<jay::Buffer>(verifier, VT_STRDATA) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint64_t>(verifier, VT_NULLCOUNT) &&
           VerifyField<uint8_t>(verifier, VT_STATS_TYPE) &&
           VerifyOffset(verifier, VT_STATS) &&
           VerifyStats(verifier, stats(), stats_type()) &&
           VerifyOffset(verifier, VT_TYPE) &&
           verifier.VerifyTable(type()) &&
           VerifyField<uint64_t>(verifier, VT_NROWS) &&
           VerifyOffset(verifier, VT_BUFFERS) &&
           verifier.VerifyVector(buffers()) &&
           VerifyOffset(verifier, VT_CHILDREN) &&
           verifier.VerifyVector(children()) &&
           verifier.VerifyVectorOfTables(children()) &&
           verifier.EndTable();
  }
};

template<> inline const jay::StatsBool *Column::stats_as<jay::StatsBool>() const {
  return stats_as_Bool();
}

template<> inline const jay::StatsInt8 *Column::stats_as<jay::StatsInt8>() const {
  return stats_as_Int8();
}

template<> inline const jay::StatsInt16 *Column::stats_as<jay::StatsInt16>() const {
  return stats_as_Int16();
}

template<> inline const jay::StatsInt32 *Column::stats_as<jay::StatsInt32>() const {
  return stats_as_Int32();
}

template<> inline const jay::StatsInt64 *Column::stats_as<jay::StatsInt64>() const {
  return stats_as_Int64();
}

template<> inline const jay::StatsFloat32 *Column::stats_as<jay::StatsFloat32>() const {
  return stats_as_Float32();
}

template<> inline const jay::StatsFloat64 *Column::stats_as<jay::StatsFloat64>() const {
  return stats_as_Float64();
}

struct ColumnBuilder {
  typedef Column Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_stype(jay::SType stype) {
    fbb_.AddElement<uint8_t>(Column::VT_STYPE, static_cast<uint8_t>(stype), 0);
  }
  void add_data(const jay::Buffer *data) {
    fbb_.AddStruct(Column::VT_DATA, data);
  }
  void add_strdata(const jay::Buffer *strdata) {
    fbb_.AddStruct(Column::VT_STRDATA, strdata);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Column::VT_NAME, name);
  }
  void add_nullcount(uint64_t nullcount) {
    fbb_.AddElement<uint64_t>(Column::VT_NULLCOUNT, nullcount, 0);
  }
  void add_stats_type(jay::Stats stats_type) {
    fbb_.AddElement<uint8_t>(Column::VT_STATS_TYPE, static_cast<uint8_t>(stats_type), 0);
  }
  void add_stats(flatbuffers::Offset<void> stats) {
    fbb_.AddOffset(Column::VT_STATS, stats);
  }
  void add_type(flatbuffers::Offset<jay::Type> type) {
    fbb_.AddOffset(Column::VT_TYPE, type);
  }
  void add_nrows(uint64_t nrows) {
    fbb_.AddElement<uint64_t>(Column::VT_NROWS, nrows, 0);
  }
  void add_buffers(flatbuffers::Offset<flatbuffers::Vector<const jay::Buffer *>> buffers) {
    fbb_.AddOffset(Column::VT_BUFFERS, buffers);
  }
  void add_children(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<jay::Column>>> children) {
    fbb_.AddOffset(Column::VT_CHILDREN, children);
  }
  explicit ColumnBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ColumnBuilder &operator=(const ColumnBuilder &);
  flatbuffers::Offset<Column> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Column>(end);
    return o;
  }
};

inline flatbuffers::Offset<Column> CreateColumn(
    flatbuffers::FlatBufferBuilder &_fbb,
    jay::SType stype = jay::SType_Bool8,
    const jay::Buffer *data = 0,
    const jay::Buffer *strdata = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    uint64_t nullcount = 0,
    jay::Stats stats_type = jay::Stats_NONE,
    flatbuffers::Offset<void> stats = 0,
    flatbuffers::Offset<jay::Type> type = 0,
    uint64_t nrows = 0,
    flatbuffers::Offset<flatbuffers::Vector<const jay::Buffer *>> buffers = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<jay::Column>>> children = 0) {
  ColumnBuilder builder_(_fbb);
  builder_.add_nrows(nrows);
  builder_.add_nullcount(nullcount);
  builder_.add_children(children);
  builder_.add_buffers(buffers);
  builder_.add_type(type);
  builder_.add_stats(stats);
  builder_.add_name(name);
  builder_.add_strdata(strdata);
  builder_.add_data(data);
  builder_.add_stats_type(stats_type);
  builder_.add_stype(stype);
  return builder_.Finish();
}

inline flatbuffers::Offset<Column> CreateColumnDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    jay::SType stype = jay::SType_Bool8,
    const jay::Buffer *data = 0,
    const jay::Buffer *strdata = 0,
    const char *name = nullptr,
    uint64_t nullcount = 0,
    jay::Stats stats_type = jay::Stats_NONE,
    flatbuffers::Offset<void> stats = 0,
    flatbuffers::Offset<jay::Type> type = 0,
    uint64_t nrows = 0,
    const std::vector<jay::Buffer> *buffers = nullptr,
    const std::vector<flatbuffers::Offset<jay::Column>> *children = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto buffers__ = buffers ? _fbb.CreateVectorOfStructs<jay::Buffer>(*buffers) : 0;
  auto children__ = children ? _fbb.CreateVector<flatbuffers::Offset<jay::Column>>(*children) : 0;
  return jay::CreateColumn(
      _fbb,
      stype,
      data,
      strdata,
      name__,
      nullcount,
      stats_type,
      stats,
      type,
      nrows,
      buffers__,
      children__);
}

inline bool VerifyTypeExtra(flatbuffers::Verifier &verifier, const void *obj, TypeExtra type) {
  switch (type) {
    case TypeExtra_NONE: {
      return true;
    }
    case TypeExtra_child: {
      auto ptr = reinterpret_cast<const jay::Type *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyTypeExtraVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyTypeExtra(
        verifier,  values->Get(i), types->GetEnum<TypeExtra>(i))) {
      return false;
    }
  }
  return true;
}

inline bool VerifyStats(flatbuffers::Verifier &verifier, const void *obj, Stats type) {
  // DO NOT REMOVE THIS LINE!
  // Needed for tests/test-jay.py::test_jay_backward_compatibility
  if (!obj) return true;
  switch (type) {
    case Stats_NONE: {
      return true;
    }
    case Stats_Bool: {
      return verifier.Verify<jay::StatsBool>(static_cast<const uint8_t *>(obj), 0);
    }
    case Stats_Int8: {
      return verifier.Verify<jay::StatsInt8>(static_cast<const uint8_t *>(obj), 0);
    }
    case Stats_Int16: {
      return verifier.Verify<jay::StatsInt16>(static_cast<const uint8_t *>(obj), 0);
    }
    case Stats_Int32: {
      return verifier.Verify<jay::StatsInt32>(static_cast<const uint8_t *>(obj), 0);
    }
    case Stats_Int64: {
      return verifier.Verify<jay::StatsInt64>(static_cast<const uint8_t *>(obj), 0);
    }
    case Stats_Float32: {
      return verifier.Verify<jay::StatsFloat32>(static_cast<const uint8_t *>(obj), 0);
    }
    case Stats_Float64: {
      return verifier.Verify<jay::StatsFloat64>(static_cast<const uint8_t *>(obj), 0);
    }
    default: return true;
  }
}

inline bool VerifyStatsVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyStats(
        verifier,  values->Get(i), types->GetEnum<Stats>(i))) {
      return false;
    }
  }
  return true;
}

inline const jay::Frame *GetFrame(const void *buf) {
  return flatbuffers::GetRoot<jay::Frame>(buf);
}

inline const jay::Frame *GetSizePrefixedFrame(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<jay::Frame>(buf);
}

inline bool VerifyFrameBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<jay::Frame>(nullptr);
}

inline bool VerifySizePrefixedFrameBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<jay::Frame>(nullptr);
}

inline void FinishFrameBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<jay::Frame> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedFrameBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<jay::Frame> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace jay

#endif  // FLATBUFFERS_GENERATED_JAY_JAY_H_
