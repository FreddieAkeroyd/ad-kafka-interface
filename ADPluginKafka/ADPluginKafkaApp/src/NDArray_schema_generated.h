// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_NDARRAYSCHEMA_FB_TABLES_H_
#define FLATBUFFERS_GENERATED_NDARRAYSCHEMA_FB_TABLES_H_

#include "flatbuffers.h"

namespace FB_Tables {

struct epicsTimeStamp;

struct NDAttribute;

struct NDArray;

enum DType {
  DType_int8 = 0,
  DType_uint8 = 1,
  DType_int16 = 2,
  DType_uint16 = 3,
  DType_int32 = 4,
  DType_uint32 = 5,
  DType_float32 = 6,
  DType_float64 = 7,
  DType_c_string = 8,
  DType_MIN = DType_int8,
  DType_MAX = DType_c_string
};

inline const DType (&EnumValuesDType())[9] {
  static const DType values[] = {
    DType_int8,
    DType_uint8,
    DType_int16,
    DType_uint16,
    DType_int32,
    DType_uint32,
    DType_float32,
    DType_float64,
    DType_c_string
  };
  return values;
}

inline const char * const *EnumNamesDType() {
  static const char * const names[] = {
    "int8",
    "uint8",
    "int16",
    "uint16",
    "int32",
    "uint32",
    "float32",
    "float64",
    "c_string",
    nullptr
  };
  return names;
}

inline const char *EnumNameDType(DType e) {
  if (e < DType_int8 || e > DType_c_string) return "";
  const size_t index = static_cast<int>(e);
  return EnumNamesDType()[index];
}

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) epicsTimeStamp FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t secPastEpoch_;
  int32_t nsec_;

 public:
  epicsTimeStamp() {
    memset(static_cast<void *>(this), 0, sizeof(epicsTimeStamp));
  }
  epicsTimeStamp(int32_t _secPastEpoch, int32_t _nsec)
      : secPastEpoch_(flatbuffers::EndianScalar(_secPastEpoch)),
        nsec_(flatbuffers::EndianScalar(_nsec)) {
  }
  int32_t secPastEpoch() const {
    return flatbuffers::EndianScalar(secPastEpoch_);
  }
  int32_t nsec() const {
    return flatbuffers::EndianScalar(nsec_);
  }
};
FLATBUFFERS_STRUCT_END(epicsTimeStamp, 8);

struct NDAttribute FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PNAME = 4,
    VT_PDESCRIPTION = 6,
    VT_PSOURCE = 8,
    VT_DATATYPE = 10,
    VT_PDATA = 12
  };
  const flatbuffers::String *pName() const {
    return GetPointer<const flatbuffers::String *>(VT_PNAME);
  }
  const flatbuffers::String *pDescription() const {
    return GetPointer<const flatbuffers::String *>(VT_PDESCRIPTION);
  }
  const flatbuffers::String *pSource() const {
    return GetPointer<const flatbuffers::String *>(VT_PSOURCE);
  }
  DType dataType() const {
    return static_cast<DType>(GetField<int8_t>(VT_DATATYPE, 0));
  }
  const flatbuffers::Vector<uint8_t> *pData() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_PDATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_PNAME) &&
           verifier.VerifyString(pName()) &&
           VerifyOffset(verifier, VT_PDESCRIPTION) &&
           verifier.VerifyString(pDescription()) &&
           VerifyOffset(verifier, VT_PSOURCE) &&
           verifier.VerifyString(pSource()) &&
           VerifyField<int8_t>(verifier, VT_DATATYPE) &&
           VerifyOffset(verifier, VT_PDATA) &&
           verifier.VerifyVector(pData()) &&
           verifier.EndTable();
  }
};

struct NDAttributeBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_pName(flatbuffers::Offset<flatbuffers::String> pName) {
    fbb_.AddOffset(NDAttribute::VT_PNAME, pName);
  }
  void add_pDescription(flatbuffers::Offset<flatbuffers::String> pDescription) {
    fbb_.AddOffset(NDAttribute::VT_PDESCRIPTION, pDescription);
  }
  void add_pSource(flatbuffers::Offset<flatbuffers::String> pSource) {
    fbb_.AddOffset(NDAttribute::VT_PSOURCE, pSource);
  }
  void add_dataType(DType dataType) {
    fbb_.AddElement<int8_t>(NDAttribute::VT_DATATYPE, static_cast<int8_t>(dataType), 0);
  }
  void add_pData(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> pData) {
    fbb_.AddOffset(NDAttribute::VT_PDATA, pData);
  }
  explicit NDAttributeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  NDAttributeBuilder &operator=(const NDAttributeBuilder &);
  flatbuffers::Offset<NDAttribute> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<NDAttribute>(end);
    return o;
  }
};

inline flatbuffers::Offset<NDAttribute> CreateNDAttribute(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> pName = 0,
    flatbuffers::Offset<flatbuffers::String> pDescription = 0,
    flatbuffers::Offset<flatbuffers::String> pSource = 0,
    DType dataType = DType_int8,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> pData = 0) {
  NDAttributeBuilder builder_(_fbb);
  builder_.add_pData(pData);
  builder_.add_pSource(pSource);
  builder_.add_pDescription(pDescription);
  builder_.add_pName(pName);
  builder_.add_dataType(dataType);
  return builder_.Finish();
}

inline flatbuffers::Offset<NDAttribute> CreateNDAttributeDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *pName = nullptr,
    const char *pDescription = nullptr,
    const char *pSource = nullptr,
    DType dataType = DType_int8,
    const std::vector<uint8_t> *pData = nullptr) {
  auto pName__ = pName ? _fbb.CreateString(pName) : 0;
  auto pDescription__ = pDescription ? _fbb.CreateString(pDescription) : 0;
  auto pSource__ = pSource ? _fbb.CreateString(pSource) : 0;
  auto pData__ = pData ? _fbb.CreateVector<uint8_t>(*pData) : 0;
  return FB_Tables::CreateNDAttribute(
      _fbb,
      pName__,
      pDescription__,
      pSource__,
      dataType,
      pData__);
}

struct NDArray FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_TIMESTAMP = 6,
    VT_EPICSTS = 8,
    VT_DIMS = 10,
    VT_DATATYPE = 12,
    VT_PDATA = 14,
    VT_PATTRIBUTELIST = 16
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  double timeStamp() const {
    return GetField<double>(VT_TIMESTAMP, 0.0);
  }
  const epicsTimeStamp *epicsTS() const {
    return GetStruct<const epicsTimeStamp *>(VT_EPICSTS);
  }
  const flatbuffers::Vector<uint64_t> *dims() const {
    return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_DIMS);
  }
  DType dataType() const {
    return static_cast<DType>(GetField<int8_t>(VT_DATATYPE, 0));
  }
  const flatbuffers::Vector<uint8_t> *pData() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_PDATA);
  }
  const flatbuffers::Vector<flatbuffers::Offset<NDAttribute>> *pAttributeList() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<NDAttribute>> *>(VT_PATTRIBUTELIST);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyField<double>(verifier, VT_TIMESTAMP) &&
           VerifyField<epicsTimeStamp>(verifier, VT_EPICSTS) &&
           VerifyOffset(verifier, VT_DIMS) &&
           verifier.VerifyVector(dims()) &&
           VerifyField<int8_t>(verifier, VT_DATATYPE) &&
           VerifyOffset(verifier, VT_PDATA) &&
           verifier.VerifyVector(pData()) &&
           VerifyOffset(verifier, VT_PATTRIBUTELIST) &&
           verifier.VerifyVector(pAttributeList()) &&
           verifier.VerifyVectorOfTables(pAttributeList()) &&
           verifier.EndTable();
  }
};

struct NDArrayBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(NDArray::VT_ID, id, 0);
  }
  void add_timeStamp(double timeStamp) {
    fbb_.AddElement<double>(NDArray::VT_TIMESTAMP, timeStamp, 0.0);
  }
  void add_epicsTS(const epicsTimeStamp *epicsTS) {
    fbb_.AddStruct(NDArray::VT_EPICSTS, epicsTS);
  }
  void add_dims(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> dims) {
    fbb_.AddOffset(NDArray::VT_DIMS, dims);
  }
  void add_dataType(DType dataType) {
    fbb_.AddElement<int8_t>(NDArray::VT_DATATYPE, static_cast<int8_t>(dataType), 0);
  }
  void add_pData(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> pData) {
    fbb_.AddOffset(NDArray::VT_PDATA, pData);
  }
  void add_pAttributeList(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<NDAttribute>>> pAttributeList) {
    fbb_.AddOffset(NDArray::VT_PATTRIBUTELIST, pAttributeList);
  }
  explicit NDArrayBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  NDArrayBuilder &operator=(const NDArrayBuilder &);
  flatbuffers::Offset<NDArray> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<NDArray>(end);
    return o;
  }
};

inline flatbuffers::Offset<NDArray> CreateNDArray(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    double timeStamp = 0.0,
    const epicsTimeStamp *epicsTS = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint64_t>> dims = 0,
    DType dataType = DType_int8,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> pData = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<NDAttribute>>> pAttributeList = 0) {
  NDArrayBuilder builder_(_fbb);
  builder_.add_timeStamp(timeStamp);
  builder_.add_pAttributeList(pAttributeList);
  builder_.add_pData(pData);
  builder_.add_dims(dims);
  builder_.add_epicsTS(epicsTS);
  builder_.add_id(id);
  builder_.add_dataType(dataType);
  return builder_.Finish();
}

inline flatbuffers::Offset<NDArray> CreateNDArrayDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    double timeStamp = 0.0,
    const epicsTimeStamp *epicsTS = 0,
    const std::vector<uint64_t> *dims = nullptr,
    DType dataType = DType_int8,
    const std::vector<uint8_t> *pData = nullptr,
    const std::vector<flatbuffers::Offset<NDAttribute>> *pAttributeList = nullptr) {
  auto dims__ = dims ? _fbb.CreateVector<uint64_t>(*dims) : 0;
  auto pData__ = pData ? _fbb.CreateVector<uint8_t>(*pData) : 0;
  auto pAttributeList__ = pAttributeList ? _fbb.CreateVector<flatbuffers::Offset<NDAttribute>>(*pAttributeList) : 0;
  return FB_Tables::CreateNDArray(
      _fbb,
      id,
      timeStamp,
      epicsTS,
      dims__,
      dataType,
      pData__,
      pAttributeList__);
}

inline const FB_Tables::NDArray *GetNDArray(const void *buf) {
  return flatbuffers::GetRoot<FB_Tables::NDArray>(buf);
}

inline const FB_Tables::NDArray *GetSizePrefixedNDArray(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<FB_Tables::NDArray>(buf);
}

inline const char *NDArrayIdentifier() {
  return "NDAr";
}

inline bool NDArrayBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, NDArrayIdentifier());
}

inline bool VerifyNDArrayBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<FB_Tables::NDArray>(NDArrayIdentifier());
}

inline bool VerifySizePrefixedNDArrayBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<FB_Tables::NDArray>(NDArrayIdentifier());
}

inline void FinishNDArrayBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<FB_Tables::NDArray> root) {
  fbb.Finish(root, NDArrayIdentifier());
}

inline void FinishSizePrefixedNDArrayBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<FB_Tables::NDArray> root) {
  fbb.FinishSizePrefixed(root, NDArrayIdentifier());
}

}  // namespace FB_Tables

#endif  // FLATBUFFERS_GENERATED_NDARRAYSCHEMA_FB_TABLES_H_
