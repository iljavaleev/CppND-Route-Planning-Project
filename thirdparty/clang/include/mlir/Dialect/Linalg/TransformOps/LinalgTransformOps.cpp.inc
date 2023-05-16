/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::DecomposeOp,
::mlir::transform::FuseIntoContainingOp,
::mlir::transform::FuseOp,
::mlir::transform::GeneralizeOp,
::mlir::transform::InterchangeOp,
::mlir::transform::MaskedVectorizeOp,
::mlir::transform::MatchOp,
::mlir::transform::MultiTileSizesOp,
::mlir::transform::PackOp,
::mlir::transform::PackTransposeOp,
::mlir::transform::PadOp,
::mlir::transform::PromoteOp,
::mlir::transform::ReplaceOp,
::mlir::transform::ScalarizeOp,
::mlir::transform::SplitOp,
::mlir::transform::SplitReductionOp,
::mlir::transform::TileOp,
::mlir::transform::TileReductionUsingForeachThreadOp,
::mlir::transform::TileReductionUsingScfOp,
::mlir::transform::TileToForeachThreadOp,
::mlir::transform::TileToScfForOp,
::mlir::transform::VectorizeOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isa<::mlir::pdl::OperationType>()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be PDL handle to an `mlir::Operation *`, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isa<::mlir::transform::TransformHandleTypeInterface>()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((type.isa<::mlir::transform::TransformHandleTypeInterface>())) || ((type.isa<::mlir::transform::ParamType>())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be transform 'param' type or any handle type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(attr.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))); })))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: 64-bit integer array attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::DenseI64ArrayAttr>())) && ((::llvm::all_of(attr.cast<DenseI64ArrayAttr>().asArrayRef(), [&](auto v) { return v >= 0; }))))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: i64 dense array attribute whose value is non-negative";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::DenseI64ArrayAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(attr.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && ((attr.isa<::mlir::StringAttr>())); })))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: string array attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<mlir::transform::MatchInterfaceEnumAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: An interface to match";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::DictionaryAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: dictionary of named attribute values";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::TypeAttr>())) && ((attr.cast<::mlir::TypeAttr>().getValue().isa<::mlir::Type>())))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: any type attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64))))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::ArrayAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: array attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps9(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(attr.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(attr.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))); }))); })))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: array of arrays of i64";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps10(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(attr.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && ((attr.isa<::mlir::BoolAttr>())); })))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: 1-bit boolean array attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps11(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::UnitAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: unit attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps12(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(attr.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && ((attr.isa<::mlir::DeviceMappingAttrInterface>())); })))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: Device Mapping array attribute";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_LinalgTransformOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DecomposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DecomposeOpGenericAdaptorBase::DecomposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.decompose", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> DecomposeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr DecomposeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
DecomposeOpAdaptor::DecomposeOpAdaptor(DecomposeOp op) : DecomposeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult DecomposeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DecomposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range DecomposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> DecomposeOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange DecomposeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> DecomposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DecomposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> DecomposeOp::getTransformed() {
  return *getODSResults(0).begin();
}

void DecomposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void DecomposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DecomposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DecomposeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DecomposeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DecomposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DecomposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::DecomposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseIntoContainingOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FuseIntoContainingOpGenericAdaptorBase::FuseIntoContainingOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.fuse_into_containing_op", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> FuseIntoContainingOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FuseIntoContainingOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FuseIntoContainingOpAdaptor::FuseIntoContainingOpAdaptor(FuseIntoContainingOp op) : FuseIntoContainingOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult FuseIntoContainingOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FuseIntoContainingOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FuseIntoContainingOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> FuseIntoContainingOp::getProducerOp() {
  return *getODSOperands(0).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> FuseIntoContainingOp::getContainingOp() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FuseIntoContainingOp::getProducerOpMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange FuseIntoContainingOp::getContainingOpMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> FuseIntoContainingOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FuseIntoContainingOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> FuseIntoContainingOp::getFusedOp() {
  return *getODSResults(0).begin();
}

void FuseIntoContainingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type fused_op, ::mlir::Value producer_op, ::mlir::Value containing_op) {
  odsState.addOperands(producer_op);
  odsState.addOperands(containing_op);
  odsState.addTypes(fused_op);
}

void FuseIntoContainingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value producer_op, ::mlir::Value containing_op) {
  odsState.addOperands(producer_op);
  odsState.addOperands(containing_op);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuseIntoContainingOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FuseIntoContainingOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FuseIntoContainingOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FuseIntoContainingOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand producer_opRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> producer_opOperands(producer_opRawOperands);  ::llvm::SMLoc producer_opOperandsLoc;
  (void)producer_opOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand containing_opRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> containing_opOperands(containing_opRawOperands);  ::llvm::SMLoc containing_opOperandsLoc;
  (void)containing_opOperandsLoc;

  producer_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(producer_opRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  containing_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(containing_opRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(producer_opOperands, odsBuildableType0, producer_opOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(containing_opOperands, odsBuildableType0, containing_opOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FuseIntoContainingOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getProducerOp();
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter << getContainingOp();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void FuseIntoContainingOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, ::mlir::transform::TransformMappingResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Free::get(), value, ::mlir::transform::TransformMappingResource::get());
  for (::mlir::Value value : getODSOperands(1))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, ::mlir::transform::TransformMappingResource::get());
  for (::mlir::Value value : getODSResults(0))
    effects.emplace_back(::mlir::MemoryEffects::Allocate::get(), value, ::mlir::transform::TransformMappingResource::get());
  for (::mlir::Value value : getODSResults(0))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, ::mlir::transform::TransformMappingResource::get());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::FuseIntoContainingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FuseOpGenericAdaptorBase::FuseOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.fuse", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> FuseOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FuseOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, FuseOp::getTileSizesAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileInterchangeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, FuseOp::getTileInterchangeAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileInterchange() {
  auto attr = getTileInterchangeAttr();
  return attr;
}

} // namespace detail
FuseOpAdaptor::FuseOpAdaptor(FuseOp op) : FuseOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult FuseOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_tile_interchange;
  ::mlir::Attribute tblgen_tile_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == FuseOp::getTileInterchangeAttrName(*odsOpName)) {
      tblgen_tile_interchange = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == FuseOp::getTileSizesAttrName(*odsOpName)) {
      tblgen_tile_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_tile_sizes && !(((tblgen_tile_sizes.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_tile_sizes.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.fuse' op ""attribute 'tile_sizes' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_tile_interchange && !(((tblgen_tile_interchange.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_tile_interchange.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.fuse' op ""attribute 'tile_interchange' failed to satisfy constraint: 64-bit integer array attribute");
  return ::mlir::success();
}

void FuseOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "transformed");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "loops");
}

std::pair<unsigned, unsigned> FuseOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FuseOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> FuseOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FuseOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> FuseOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range FuseOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> FuseOp::getTransformed() {
  return *getODSResults(0).begin();
}

::mlir::Operation::result_range FuseOp::getLoops() {
  return getODSResults(1);
}

::mlir::ArrayAttr FuseOp::getTileSizesAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getTileSizesAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr FuseOp::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::mlir::ArrayAttr FuseOp::getTileInterchangeAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getTileInterchangeAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr FuseOp::getTileInterchange() {
  auto attr = getTileInterchangeAttr();
  return attr;
}

void FuseOp::setTileSizesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTileSizesAttrName(), attr);
}

void FuseOp::setTileInterchangeAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTileInterchangeAttrName(), attr);
}

void FuseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes, ::mlir::ArrayAttr tile_interchange) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.addAttribute(getTileSizesAttrName(odsState.name), tile_sizes);
  }
  if (tile_interchange) {
    odsState.addAttribute(getTileInterchangeAttrName(odsState.name), tile_interchange);
  }
  odsState.addTypes(transformed);
  odsState.addTypes(loops);
}

void FuseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes, ::mlir::ArrayAttr tile_interchange) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.addAttribute(getTileSizesAttrName(odsState.name), tile_sizes);
  }
  if (tile_interchange) {
    odsState.addAttribute(getTileInterchangeAttrName(odsState.name), tile_interchange);
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuseOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FuseOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[1])) {
    attributes.append(attrNames[1], odsBuilder.getI64ArrayAttr({}));
  }
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], odsBuilder.getI64ArrayAttr({}));
  }
}

::mlir::LogicalResult FuseOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_tile_interchange;
  ::mlir::Attribute tblgen_tile_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getTileInterchangeAttrName()) {
      tblgen_tile_interchange = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getTileSizesAttrName()) {
      tblgen_tile_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(*this, tblgen_tile_sizes, "tile_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(*this, tblgen_tile_interchange, "tile_interchange")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FuseOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::FuseOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GeneralizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GeneralizeOpGenericAdaptorBase::GeneralizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.generalize", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> GeneralizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GeneralizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
GeneralizeOpAdaptor::GeneralizeOpAdaptor(GeneralizeOp op) : GeneralizeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult GeneralizeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GeneralizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GeneralizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> GeneralizeOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange GeneralizeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> GeneralizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GeneralizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> GeneralizeOp::getTransformed() {
  return *getODSResults(0).begin();
}

void GeneralizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void GeneralizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GeneralizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GeneralizeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GeneralizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GeneralizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GeneralizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GeneralizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::InterchangeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
InterchangeOpGenericAdaptorBase::InterchangeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.interchange", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> InterchangeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr InterchangeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr InterchangeOpGenericAdaptorBase::getIteratorInterchangeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, InterchangeOp::getIteratorInterchangeAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> InterchangeOpGenericAdaptorBase::getIteratorInterchange() {
  auto attr = getIteratorInterchangeAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
InterchangeOpAdaptor::InterchangeOpAdaptor(InterchangeOp op) : InterchangeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult InterchangeOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_iterator_interchange;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == InterchangeOp::getIteratorInterchangeAttrName(*odsOpName)) {
      tblgen_iterator_interchange = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_iterator_interchange && !(((tblgen_iterator_interchange.isa<::mlir::DenseI64ArrayAttr>())) && ((::llvm::all_of(tblgen_iterator_interchange.cast<DenseI64ArrayAttr>().asArrayRef(), [&](auto v) { return v >= 0; })))))
    return emitError(loc, "'transform.structured.interchange' op ""attribute 'iterator_interchange' failed to satisfy constraint: i64 dense array attribute whose value is non-negative");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> InterchangeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range InterchangeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> InterchangeOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange InterchangeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> InterchangeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range InterchangeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> InterchangeOp::getTransformed() {
  return *getODSResults(0).begin();
}

::mlir::DenseI64ArrayAttr InterchangeOp::getIteratorInterchangeAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getIteratorInterchangeAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> InterchangeOp::getIteratorInterchange() {
  auto attr = getIteratorInterchangeAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void InterchangeOp::setIteratorInterchangeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getIteratorInterchangeAttrName(), attr);
}

void InterchangeOp::setIteratorInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIteratorInterchangeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getIteratorInterchangeAttrName());
}

::mlir::Attribute InterchangeOp::removeIteratorInterchangeAttr() {
  return (*this)->removeAttr(getIteratorInterchangeAttrName());
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange) {
  odsState.addOperands(target);
  if (iterator_interchange) {
    odsState.addAttribute(getIteratorInterchangeAttrName(odsState.name), iterator_interchange);
  }
  odsState.addTypes(transformed);
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange) {
  odsState.addOperands(target);
  if (iterator_interchange) {
    odsState.addAttribute(getIteratorInterchangeAttrName(odsState.name), iterator_interchange);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange) {
  odsState.addOperands(target);
  odsState.addAttribute(getIteratorInterchangeAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(iterator_interchange));
  odsState.addTypes(transformed);
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange) {
  odsState.addOperands(target);
  odsState.addAttribute(getIteratorInterchangeAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(iterator_interchange));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InterchangeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult InterchangeOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_iterator_interchange;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getIteratorInterchangeAttrName()) {
      tblgen_iterator_interchange = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(*this, tblgen_iterator_interchange, "iterator_interchange")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult InterchangeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult InterchangeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr iterator_interchangeAttr;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("iterator_interchange"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(iterator_interchangeAttr, ::mlir::Type{}, "iterator_interchange",
          result.attributes)) {
    return ::mlir::failure();
  }
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void InterchangeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if ((*this)->getAttr("iterator_interchange")) {
    _odsPrinter << ' ' << "iterator_interchange";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getIteratorInterchangeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("iterator_interchange");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIteratorInterchangeAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("iterator_interchange");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::InterchangeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MaskedVectorizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MaskedVectorizeOpGenericAdaptorBase::MaskedVectorizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.masked_vectorize", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MaskedVectorizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr MaskedVectorizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr MaskedVectorizeOpGenericAdaptorBase::getStaticVectorSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, MaskedVectorizeOp::getStaticVectorSizesAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> MaskedVectorizeOpGenericAdaptorBase::getStaticVectorSizes() {
  auto attr = getStaticVectorSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
MaskedVectorizeOpAdaptor::MaskedVectorizeOpAdaptor(MaskedVectorizeOp op) : MaskedVectorizeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult MaskedVectorizeOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_static_vector_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == MaskedVectorizeOp::getStaticVectorSizesAttrName(*odsOpName)) {
      tblgen_static_vector_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_static_vector_sizes && !((tblgen_static_vector_sizes.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.masked_vectorize' op ""attribute 'static_vector_sizes' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MaskedVectorizeOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range MaskedVectorizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> MaskedVectorizeOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range MaskedVectorizeOp::getVectorSizes() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange MaskedVectorizeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange MaskedVectorizeOp::getVectorSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MaskedVectorizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MaskedVectorizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr MaskedVectorizeOp::getStaticVectorSizesAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getStaticVectorSizesAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> MaskedVectorizeOp::getStaticVectorSizes() {
  auto attr = getStaticVectorSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void MaskedVectorizeOp::setStaticVectorSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticVectorSizesAttrName(), attr);
}

void MaskedVectorizeOp::setStaticVectorSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getStaticVectorSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getStaticVectorSizesAttrName());
}

::mlir::Attribute MaskedVectorizeOp::removeStaticVectorSizesAttr() {
  return (*this)->removeAttr(getStaticVectorSizesAttrName());
}

void MaskedVectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  if (static_vector_sizes) {
    odsState.addAttribute(getStaticVectorSizesAttrName(odsState.name), static_vector_sizes);
  }
}

void MaskedVectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  if (static_vector_sizes) {
    odsState.addAttribute(getStaticVectorSizesAttrName(odsState.name), static_vector_sizes);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskedVectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  odsState.addAttribute(getStaticVectorSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_vector_sizes));
}

void MaskedVectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  odsState.addAttribute(getStaticVectorSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_vector_sizes));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskedVectorizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MaskedVectorizeOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_static_vector_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getStaticVectorSizesAttrName()) {
      tblgen_static_vector_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_static_vector_sizes, "static_vector_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MaskedVectorizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MaskedVectorizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> vector_sizesOperands;
  ::llvm::SMLoc vector_sizesOperandsLoc;
  (void)vector_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_vector_sizesAttr;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("vector_sizes"))
    return ::mlir::failure();
  {
    vector_sizesOperandsLoc = parser.getCurrentLocation();
    if (parseDynamicIndexList(parser, vector_sizesOperands, static_vector_sizesAttr))
      return ::mlir::failure();
    if (static_vector_sizesAttr)
      result.addAttribute("static_vector_sizes", static_vector_sizesAttr);
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(vector_sizesOperands, odsBuildableType0, vector_sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MaskedVectorizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "vector_sizes";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getVectorSizes(), getStaticVectorSizesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_vector_sizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticVectorSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_vector_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MaskedVectorizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchOpGenericAdaptorBase::MatchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.match", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MatchOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MatchOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr MatchOpGenericAdaptorBase::getOpsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, MatchOp::getOpsAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::std::optional< ::mlir::ArrayAttr > MatchOpGenericAdaptorBase::getOps() {
  auto attr = getOpsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

mlir::transform::MatchInterfaceEnumAttr MatchOpGenericAdaptorBase::getInterfaceAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, MatchOp::getInterfaceAttrName(*odsOpName)).dyn_cast_or_null<mlir::transform::MatchInterfaceEnumAttr>();
  return attr;
}

::std::optional<mlir::transform::MatchInterfaceEnum> MatchOpGenericAdaptorBase::getInterface() {
  auto attr = getInterfaceAttr();
  return attr ? ::std::optional<mlir::transform::MatchInterfaceEnum>(attr.getValue()) : (::std::nullopt);
}

::mlir::DictionaryAttr MatchOpGenericAdaptorBase::getOpAttrsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, MatchOp::getOpAttrsAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DictionaryAttr>();
  return attr;
}

::std::optional< ::mlir::DictionaryAttr > MatchOpGenericAdaptorBase::getOpAttrs() {
  auto attr = getOpAttrsAttr();
  return attr ? ::std::optional< ::mlir::DictionaryAttr >(attr) : (::std::nullopt);
}

::mlir::TypeAttr MatchOpGenericAdaptorBase::getFilterResultTypeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, MatchOp::getFilterResultTypeAttrName(*odsOpName)).dyn_cast_or_null<::mlir::TypeAttr>();
  return attr;
}

::std::optional<::mlir::Type> MatchOpGenericAdaptorBase::getFilterResultType() {
  auto attr = getFilterResultTypeAttr();
  return attr ? ::std::optional<::mlir::Type>(attr.getValue().cast<::mlir::Type>()) : (::std::nullopt);
}

} // namespace detail
MatchOpAdaptor::MatchOpAdaptor(MatchOp op) : MatchOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult MatchOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_filter_result_type;
  ::mlir::Attribute tblgen_interface;
  ::mlir::Attribute tblgen_op_attrs;
  ::mlir::Attribute tblgen_ops;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == MatchOp::getFilterResultTypeAttrName(*odsOpName)) {
      tblgen_filter_result_type = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == MatchOp::getInterfaceAttrName(*odsOpName)) {
      tblgen_interface = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == MatchOp::getOpAttrsAttrName(*odsOpName)) {
      tblgen_op_attrs = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == MatchOp::getOpsAttrName(*odsOpName)) {
      tblgen_ops = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_ops && !(((tblgen_ops.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_ops.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && ((attr.isa<::mlir::StringAttr>())); }))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'ops' failed to satisfy constraint: string array attribute");

  if (tblgen_interface && !((tblgen_interface.isa<mlir::transform::MatchInterfaceEnumAttr>())))
    return emitError(loc, "'transform.structured.match' op ""attribute 'interface' failed to satisfy constraint: An interface to match");

  if (tblgen_op_attrs && !((tblgen_op_attrs.isa<::mlir::DictionaryAttr>())))
    return emitError(loc, "'transform.structured.match' op ""attribute 'op_attrs' failed to satisfy constraint: dictionary of named attribute values");

  if (tblgen_filter_result_type && !(((tblgen_filter_result_type.isa<::mlir::TypeAttr>())) && ((tblgen_filter_result_type.cast<::mlir::TypeAttr>().getValue().isa<::mlir::Type>()))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'filter_result_type' failed to satisfy constraint: any type attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatchOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MatchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> MatchOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange MatchOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MatchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MatchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> MatchOp::getResults() {
  return *getODSResults(0).begin();
}

::mlir::ArrayAttr MatchOp::getOpsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOpsAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::std::optional< ::mlir::ArrayAttr > MatchOp::getOps() {
  auto attr = getOpsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

mlir::transform::MatchInterfaceEnumAttr MatchOp::getInterfaceAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getInterfaceAttrName()).dyn_cast_or_null<mlir::transform::MatchInterfaceEnumAttr>();
}

::std::optional<mlir::transform::MatchInterfaceEnum> MatchOp::getInterface() {
  auto attr = getInterfaceAttr();
  return attr ? ::std::optional<mlir::transform::MatchInterfaceEnum>(attr.getValue()) : (::std::nullopt);
}

::mlir::DictionaryAttr MatchOp::getOpAttrsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOpAttrsAttrName()).dyn_cast_or_null<::mlir::DictionaryAttr>();
}

::std::optional< ::mlir::DictionaryAttr > MatchOp::getOpAttrs() {
  auto attr = getOpAttrsAttr();
  return attr ? ::std::optional< ::mlir::DictionaryAttr >(attr) : (::std::nullopt);
}

::mlir::TypeAttr MatchOp::getFilterResultTypeAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getFilterResultTypeAttrName()).dyn_cast_or_null<::mlir::TypeAttr>();
}

::std::optional<::mlir::Type> MatchOp::getFilterResultType() {
  auto attr = getFilterResultTypeAttr();
  return attr ? ::std::optional<::mlir::Type>(attr.getValue().cast<::mlir::Type>()) : (::std::nullopt);
}

void MatchOp::setOpsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getOpsAttrName(), attr);
}

void MatchOp::setInterfaceAttr(mlir::transform::MatchInterfaceEnumAttr attr) {
  (*this)->setAttr(getInterfaceAttrName(), attr);
}

void MatchOp::setInterface(::std::optional<mlir::transform::MatchInterfaceEnum> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInterfaceAttrName(), mlir::transform::MatchInterfaceEnumAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getInterfaceAttrName());
}

void MatchOp::setOpAttrsAttr(::mlir::DictionaryAttr attr) {
  (*this)->setAttr(getOpAttrsAttrName(), attr);
}

void MatchOp::setFilterResultTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getFilterResultTypeAttrName(), attr);
}

void MatchOp::setFilterResultType(::std::optional<::mlir::Type> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getFilterResultTypeAttrName(), ::mlir::TypeAttr::get(*attrValue));
    (*this)->removeAttr(getFilterResultTypeAttrName());
}

::mlir::Attribute MatchOp::removeOpsAttr() {
  return (*this)->removeAttr(getOpsAttrName());
}

::mlir::Attribute MatchOp::removeInterfaceAttr() {
  return (*this)->removeAttr(getInterfaceAttrName());
}

::mlir::Attribute MatchOp::removeOpAttrsAttr() {
  return (*this)->removeAttr(getOpAttrsAttrName());
}

::mlir::Attribute MatchOp::removeFilterResultTypeAttr() {
  return (*this)->removeAttr(getFilterResultTypeAttrName());
}

void MatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type) {
  odsState.addOperands(target);
  if (ops) {
    odsState.addAttribute(getOpsAttrName(odsState.name), ops);
  }
  if (interface) {
    odsState.addAttribute(getInterfaceAttrName(odsState.name), interface);
  }
  if (op_attrs) {
    odsState.addAttribute(getOpAttrsAttrName(odsState.name), op_attrs);
  }
  if (filter_result_type) {
    odsState.addAttribute(getFilterResultTypeAttrName(odsState.name), filter_result_type);
  }
  odsState.addTypes(results);
}

void MatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type) {
  odsState.addOperands(target);
  if (ops) {
    odsState.addAttribute(getOpsAttrName(odsState.name), ops);
  }
  if (interface) {
    odsState.addAttribute(getInterfaceAttrName(odsState.name), interface);
  }
  if (op_attrs) {
    odsState.addAttribute(getOpAttrsAttrName(odsState.name), op_attrs);
  }
  if (filter_result_type) {
    odsState.addAttribute(getFilterResultTypeAttrName(odsState.name), filter_result_type);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MatchOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_filter_result_type;
  ::mlir::Attribute tblgen_interface;
  ::mlir::Attribute tblgen_op_attrs;
  ::mlir::Attribute tblgen_ops;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getFilterResultTypeAttrName()) {
      tblgen_filter_result_type = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getInterfaceAttrName()) {
      tblgen_interface = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getOpAttrsAttrName()) {
      tblgen_op_attrs = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getOpsAttrName()) {
      tblgen_ops = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(*this, tblgen_ops, "ops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_interface, "interface")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_op_attrs, "op_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_filter_result_type, "filter_result_type")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MatchOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::ArrayAttr opsAttr;
  mlir::transform::MatchInterfaceEnumAttr interfaceAttr;
  ::mlir::DictionaryAttr op_attrsAttr;
  ::mlir::TypeAttr filter_result_typeAttr;
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  if (::mlir::succeeded(parser.parseOptionalKeyword("ops"))) {
  if (parser.parseLBrace())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(opsAttr, parser.getBuilder().getType<::mlir::NoneType>(), "ops",
          result.attributes)) {
    return ::mlir::failure();
  }
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("interface"))) {
  if (parser.parseLBrace())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"LinalgOp","TilingInterface"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "interface", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'interface' [LinalgOp, TilingInterface]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = mlir::transform::symbolizeMatchInterfaceEnum(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "interface attribute specification: \"" << attrStr << '"';;

      interfaceAttr = mlir::transform::MatchInterfaceEnumAttr::get(parser.getBuilder().getContext(), *attrOptional);
      result.addAttribute("interface", interfaceAttr);
    }
  }
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("attributes"))) {

  if (parser.parseCustomAttributeWithFallback(op_attrsAttr, parser.getBuilder().getType<::mlir::NoneType>(), "op_attrs",
          result.attributes)) {
    return ::mlir::failure();
  }
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("filter_result_type"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(filter_result_typeAttr, parser.getBuilder().getType<::mlir::NoneType>(), "filter_result_type",
          result.attributes)) {
    return ::mlir::failure();
  }
  }
  if (parser.parseKeyword("in"))
    return ::mlir::failure();

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if ((*this)->getAttr("ops")) {
    _odsPrinter << ' ' << "ops";
    _odsPrinter << "{";
    _odsPrinter.printAttributeWithoutType(getOpsAttr());
    _odsPrinter << "}";
  }
  if ((*this)->getAttr("interface")) {
    _odsPrinter << ' ' << "interface";
    _odsPrinter << "{";

    {
      auto caseValue = *getInterface();
      auto caseValueStr = stringifyMatchInterfaceEnum(caseValue);
      _odsPrinter << caseValueStr;
    }
    _odsPrinter << "}";
  }
  if ((*this)->getAttr("op_attrs")) {
    _odsPrinter << ' ' << "attributes";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getOpAttrsAttr());
  }
  if ((*this)->getAttr("filter_result_type")) {
    _odsPrinter << ' ' << "filter_result_type";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getFilterResultTypeAttr());
  }
  _odsPrinter << ' ' << "in";
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("ops");
  elidedAttrs.push_back("interface");
  elidedAttrs.push_back("op_attrs");
  elidedAttrs.push_back("filter_result_type");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MultiTileSizesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MultiTileSizesOpGenericAdaptorBase::MultiTileSizesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.multitile_sizes", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> MultiTileSizesOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MultiTileSizesOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr MultiTileSizesOpGenericAdaptorBase::getDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, MultiTileSizesOp::getDimensionAttrName(*odsOpName)).cast<::mlir::IntegerAttr>();
  return attr;
}

uint64_t MultiTileSizesOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MultiTileSizesOpGenericAdaptorBase::getTargetSizeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, MultiTileSizesOp::getTargetSizeAttrName(*odsOpName)).cast<::mlir::IntegerAttr>();
  return attr;
}

uint64_t MultiTileSizesOpGenericAdaptorBase::getTargetSize() {
  auto attr = getTargetSizeAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MultiTileSizesOpGenericAdaptorBase::getDivisorAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 1, MultiTileSizesOp::getDivisorAttrName(*odsOpName)).dyn_cast_or_null<::mlir::IntegerAttr>();
  return attr;
}

uint64_t MultiTileSizesOpGenericAdaptorBase::getDivisor() {
  auto attr = getDivisorAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MultiTileSizesOpAdaptor::MultiTileSizesOpAdaptor(MultiTileSizesOp op) : MultiTileSizesOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult MultiTileSizesOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'transform.structured.multitile_sizes' op ""requires attribute 'dimension'");
    if (namedAttrIt->getName() == MultiTileSizesOp::getDimensionAttrName(*odsOpName)) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_target_size;
  ::mlir::Attribute tblgen_divisor;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'transform.structured.multitile_sizes' op ""requires attribute 'target_size'");
    if (namedAttrIt->getName() == MultiTileSizesOp::getTargetSizeAttrName(*odsOpName)) {
      tblgen_target_size = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == MultiTileSizesOp::getDivisorAttrName(*odsOpName)) {
      tblgen_divisor = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_dimension && !(((tblgen_dimension.isa<::mlir::IntegerAttr>())) && ((tblgen_dimension.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.multitile_sizes' op ""attribute 'dimension' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_target_size && !(((tblgen_target_size.isa<::mlir::IntegerAttr>())) && ((tblgen_target_size.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.multitile_sizes' op ""attribute 'target_size' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_divisor && !(((tblgen_divisor.isa<::mlir::IntegerAttr>())) && ((tblgen_divisor.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.multitile_sizes' op ""attribute 'divisor' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

void MultiTileSizesOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "low_size");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "high_size");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "split_point");
}

std::pair<unsigned, unsigned> MultiTileSizesOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MultiTileSizesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> MultiTileSizesOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange MultiTileSizesOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> MultiTileSizesOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MultiTileSizesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value MultiTileSizesOp::getLowSize() {
  return *getODSResults(0).begin();
}

::mlir::Value MultiTileSizesOp::getHighSize() {
  return *getODSResults(1).begin();
}

::mlir::Value MultiTileSizesOp::getSplitPoint() {
  return *getODSResults(2).begin();
}

::mlir::IntegerAttr MultiTileSizesOp::getDimensionAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getDimensionAttrName()).cast<::mlir::IntegerAttr>();
}

uint64_t MultiTileSizesOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MultiTileSizesOp::getTargetSizeAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getTargetSizeAttrName()).cast<::mlir::IntegerAttr>();
}

uint64_t MultiTileSizesOp::getTargetSize() {
  auto attr = getTargetSizeAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MultiTileSizesOp::getDivisorAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 1, getDivisorAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

uint64_t MultiTileSizesOp::getDivisor() {
  auto attr = getDivisorAttr();
  return attr.getValue().getZExtValue();
}

void MultiTileSizesOp::setDimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void MultiTileSizesOp::setDimension(uint64_t attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MultiTileSizesOp::setTargetSizeAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getTargetSizeAttrName(), attr);
}

void MultiTileSizesOp::setTargetSize(uint64_t attrValue) {
  (*this)->setAttr(getTargetSizeAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MultiTileSizesOp::setDivisorAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDivisorAttrName(), attr);
}

void MultiTileSizesOp::setDivisor(uint64_t attrValue) {
  (*this)->setAttr(getDivisorAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor) {
  odsState.addOperands(target);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  odsState.addAttribute(getTargetSizeAttrName(odsState.name), target_size);
  if (divisor) {
    odsState.addAttribute(getDivisorAttrName(odsState.name), divisor);
  }
  odsState.addTypes(low_size);
  odsState.addTypes(high_size);
  odsState.addTypes(split_point);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor) {
  odsState.addOperands(target);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  odsState.addAttribute(getTargetSizeAttrName(odsState.name), target_size);
  if (divisor) {
    odsState.addAttribute(getDivisorAttrName(odsState.name), divisor);
  }
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor) {
  odsState.addOperands(target);
  odsState.addAttribute(getDimensionAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension));
  odsState.addAttribute(getTargetSizeAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), target_size));
  odsState.addAttribute(getDivisorAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), divisor));
  odsState.addTypes(low_size);
  odsState.addTypes(high_size);
  odsState.addTypes(split_point);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor) {
  odsState.addOperands(target);
  odsState.addAttribute(getDimensionAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension));
  odsState.addAttribute(getTargetSizeAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), target_size));
  odsState.addAttribute(getDivisorAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), divisor));
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MultiTileSizesOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[1])) {
    attributes.append(attrNames[1], odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1));
  }
}

::mlir::LogicalResult MultiTileSizesOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dimension'");
    if (namedAttrIt->getName() == getDimensionAttrName()) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_target_size;
  ::mlir::Attribute tblgen_divisor;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'target_size'");
    if (namedAttrIt->getName() == getTargetSizeAttrName()) {
      tblgen_target_size = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == getDivisorAttrName()) {
      tblgen_divisor = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_target_size, "target_size")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_divisor, "divisor")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MultiTileSizesOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MultiTileSizesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> targetTypes(targetRawTypes);
  ::mlir::Type low_sizeRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> low_sizeTypes(low_sizeRawTypes);
  ::mlir::Type high_sizeRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> high_sizeTypes(high_sizeRawTypes);
  ::mlir::Type split_pointRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> split_pointTypes(split_pointRawTypes);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  {
    if (parseMultitileSizesTypes(parser, targetRawTypes[0], low_sizeRawTypes[0], high_sizeRawTypes[0], split_pointRawTypes[0]))
      return ::mlir::failure();
  }
  result.addTypes(low_sizeTypes);
  result.addTypes(high_sizeTypes);
  result.addTypes(split_pointTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MultiTileSizesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDivisorAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("divisor");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printMultitileSizesTypes(_odsPrinter, *this, getTarget().getType(), getLowSize().getType(), getHighSize().getType(), getSplitPoint().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MultiTileSizesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PackOpGenericAdaptorBase::PackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.pack", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PackOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr PackOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr PackOpGenericAdaptorBase::getStaticPackedSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PackOp::getStaticPackedSizesAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  return attr;
}

::llvm::ArrayRef<int64_t> PackOpGenericAdaptorBase::getStaticPackedSizes() {
  auto attr = getStaticPackedSizesAttr();
  return attr;
}

} // namespace detail
PackOpAdaptor::PackOpAdaptor(PackOp op) : PackOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult PackOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_static_packed_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == PackOp::getStaticPackedSizesAttrName(*odsOpName)) {
      tblgen_static_packed_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_static_packed_sizes && !((tblgen_static_packed_sizes.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.pack' op ""attribute 'static_packed_sizes' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PackOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range PackOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range PackOp::getPackedSizes() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange PackOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange PackOp::getPackedSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PackOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PackOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackOp::getPackedOp() {
  return *getODSResults(0).begin();
}

::mlir::DenseI64ArrayAttr PackOp::getStaticPackedSizesAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getStaticPackedSizesAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> PackOp::getStaticPackedSizes() {
  auto attr = getStaticPackedSizesAttr();
  return attr;
}

void PackOp::setStaticPackedSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticPackedSizesAttrName(), attr);
}

void PackOp::setStaticPackedSizes(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getStaticPackedSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  if (static_packed_sizes) {
    odsState.addAttribute(getStaticPackedSizesAttrName(odsState.name), static_packed_sizes);
  }
  odsState.addTypes(packed_op);
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  if (static_packed_sizes) {
    odsState.addAttribute(getStaticPackedSizesAttrName(odsState.name), static_packed_sizes);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  odsState.addAttribute(getStaticPackedSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_packed_sizes));
  odsState.addTypes(packed_op);
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  odsState.addAttribute(getStaticPackedSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_packed_sizes));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PackOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], odsBuilder.getDenseI64ArrayAttr({}));
  }
}

::mlir::LogicalResult PackOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_static_packed_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getStaticPackedSizesAttrName()) {
      tblgen_static_packed_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_static_packed_sizes, "static_packed_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PackOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PackOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> packed_sizesOperands;
  ::llvm::SMLoc packed_sizesOperandsLoc;
  (void)packed_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_packed_sizesAttr;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("packed_sizes"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    packed_sizesOperandsLoc = parser.getCurrentLocation();
    if (parseDynamicIndexList(parser, packed_sizesOperands, static_packed_sizesAttr))
      return ::mlir::failure();
    if (static_packed_sizesAttr)
      result.addAttribute("static_packed_sizes", static_packed_sizesAttr);
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__allResult_functionType;
  if (parser.parseType(target__allResult_functionType))
    return ::mlir::failure();
  targetTypes = target__allResult_functionType.getInputs();
  allResultTypes = target__allResult_functionType.getResults();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(packed_sizesOperands, odsBuildableType0, packed_sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "packed_sizes";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getPackedSizes(), getStaticPackedSizesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_packed_sizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticPackedSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_packed_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackTransposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PackTransposeOpGenericAdaptorBase::PackTransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.pack_transpose", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PackTransposeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PackTransposeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr PackTransposeOpGenericAdaptorBase::getOuterPermAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PackTransposeOp::getOuterPermAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> PackTransposeOpGenericAdaptorBase::getOuterPerm() {
  auto attr = getOuterPermAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr PackTransposeOpGenericAdaptorBase::getInnerPermAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PackTransposeOp::getInnerPermAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> PackTransposeOpGenericAdaptorBase::getInnerPerm() {
  auto attr = getInnerPermAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
PackTransposeOpAdaptor::PackTransposeOpAdaptor(PackTransposeOp op) : PackTransposeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult PackTransposeOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_inner_perm;
  ::mlir::Attribute tblgen_outer_perm;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == PackTransposeOp::getInnerPermAttrName(*odsOpName)) {
      tblgen_inner_perm = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == PackTransposeOp::getOuterPermAttrName(*odsOpName)) {
      tblgen_outer_perm = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_outer_perm && !((tblgen_outer_perm.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.pack_transpose' op ""attribute 'outer_perm' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_inner_perm && !((tblgen_inner_perm.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.pack_transpose' op ""attribute 'inner_perm' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

void PackTransposeOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "packed_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "pack_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "un_pack_op");
}

std::pair<unsigned, unsigned> PackTransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PackTransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackTransposeOp::getTargetPackOrUnPackOp() {
  return *getODSOperands(0).begin();
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackTransposeOp::getTargetLinalgOp() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange PackTransposeOp::getTargetPackOrUnPackOpMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange PackTransposeOp::getTargetLinalgOpMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PackTransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PackTransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackTransposeOp::getPackedOp() {
  return *getODSResults(0).begin();
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackTransposeOp::getPackOp() {
  return *getODSResults(1).begin();
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> PackTransposeOp::getUnPackOp() {
  return *getODSResults(2).begin();
}

::mlir::DenseI64ArrayAttr PackTransposeOp::getOuterPermAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOuterPermAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> PackTransposeOp::getOuterPerm() {
  auto attr = getOuterPermAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr PackTransposeOp::getInnerPermAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getInnerPermAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> PackTransposeOp::getInnerPerm() {
  auto attr = getInnerPermAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void PackTransposeOp::setOuterPermAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getOuterPermAttrName(), attr);
}

void PackTransposeOp::setOuterPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getOuterPermAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getOuterPermAttrName());
}

void PackTransposeOp::setInnerPermAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getInnerPermAttrName(), attr);
}

void PackTransposeOp::setInnerPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInnerPermAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getInnerPermAttrName());
}

::mlir::Attribute PackTransposeOp::removeOuterPermAttr() {
  return (*this)->removeAttr(getOuterPermAttrName());
}

::mlir::Attribute PackTransposeOp::removeInnerPermAttr() {
  return (*this)->removeAttr(getInnerPermAttrName());
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  if (outer_perm) {
    odsState.addAttribute(getOuterPermAttrName(odsState.name), outer_perm);
  }
  if (inner_perm) {
    odsState.addAttribute(getInnerPermAttrName(odsState.name), inner_perm);
  }
  odsState.addTypes(packed_op);
  odsState.addTypes(pack_op);
  odsState.addTypes(un_pack_op);
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  if (outer_perm) {
    odsState.addAttribute(getOuterPermAttrName(odsState.name), outer_perm);
  }
  if (inner_perm) {
    odsState.addAttribute(getInnerPermAttrName(odsState.name), inner_perm);
  }
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm, /*optional*/::llvm::ArrayRef<int64_t> inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  odsState.addAttribute(getOuterPermAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(outer_perm));
  odsState.addAttribute(getInnerPermAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(inner_perm));
  odsState.addTypes(packed_op);
  odsState.addTypes(pack_op);
  odsState.addTypes(un_pack_op);
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm, /*optional*/::llvm::ArrayRef<int64_t> inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  odsState.addAttribute(getOuterPermAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(outer_perm));
  odsState.addAttribute(getInnerPermAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(inner_perm));
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackTransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult PackTransposeOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_inner_perm;
  ::mlir::Attribute tblgen_outer_perm;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getInnerPermAttrName()) {
      tblgen_inner_perm = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getOuterPermAttrName()) {
      tblgen_outer_perm = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_outer_perm, "outer_perm")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_inner_perm, "inner_perm")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PackTransposeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult PackTransposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand target_pack_or_un_pack_opRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> target_pack_or_un_pack_opOperands(target_pack_or_un_pack_opRawOperands);  ::llvm::SMLoc target_pack_or_un_pack_opOperandsLoc;
  (void)target_pack_or_un_pack_opOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand target_linalg_opRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> target_linalg_opOperands(target_linalg_opRawOperands);  ::llvm::SMLoc target_linalg_opOperandsLoc;
  (void)target_linalg_opOperandsLoc;
  ::mlir::DenseI64ArrayAttr outer_permAttr;
  ::mlir::DenseI64ArrayAttr inner_permAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  target_pack_or_un_pack_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(target_pack_or_un_pack_opRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("with_compute_op"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  target_linalg_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(target_linalg_opRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("outer_perm"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(outer_permAttr, ::mlir::Type{}, "outer_perm",
          result.attributes)) {
    return ::mlir::failure();
  }
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("inner_perm"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(inner_permAttr, ::mlir::Type{}, "inner_perm",
          result.attributes)) {
    return ::mlir::failure();
  }
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(target_pack_or_un_pack_opOperands, target_linalg_opOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackTransposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTargetPackOrUnPackOp();
  _odsPrinter << ' ' << "with_compute_op";
  _odsPrinter << "(";
  _odsPrinter << getTargetLinalgOp();
  _odsPrinter << ")";
  if ((*this)->getAttr("outer_perm")) {
    _odsPrinter << ' ' << "outer_perm";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getOuterPermAttr());
  }
  if ((*this)->getAttr("inner_perm")) {
    _odsPrinter << ' ' << "inner_perm";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getInnerPermAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("outer_perm");
  elidedAttrs.push_back("inner_perm");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOuterPermAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("outer_perm");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInnerPermAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("inner_perm");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PackTransposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PadOpGenericAdaptorBase::PadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.pad", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingValuesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PadOp::getPaddingValuesAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingValues() {
  auto attr = getPaddingValuesAttr();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingDimensionsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PadOp::getPaddingDimensionsAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingDimensions() {
  auto attr = getPaddingDimensionsAttr();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPackPaddingsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PadOp::getPackPaddingsAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPackPaddings() {
  auto attr = getPackPaddingsAttr();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getHoistPaddingsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PadOp::getHoistPaddingsAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getHoistPaddings() {
  auto attr = getHoistPaddingsAttr();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getTransposePaddingsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PadOp::getTransposePaddingsAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getTransposePaddings() {
  auto attr = getTransposePaddingsAttr();
  return attr;
}

} // namespace detail
PadOpAdaptor::PadOpAdaptor(PadOp op) : PadOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult PadOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_hoist_paddings;
  ::mlir::Attribute tblgen_pack_paddings;
  ::mlir::Attribute tblgen_padding_dimensions;
  ::mlir::Attribute tblgen_padding_values;
  ::mlir::Attribute tblgen_transpose_paddings;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == PadOp::getHoistPaddingsAttrName(*odsOpName)) {
      tblgen_hoist_paddings = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == PadOp::getPackPaddingsAttrName(*odsOpName)) {
      tblgen_pack_paddings = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == PadOp::getPaddingDimensionsAttrName(*odsOpName)) {
      tblgen_padding_dimensions = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == PadOp::getPaddingValuesAttrName(*odsOpName)) {
      tblgen_padding_values = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == PadOp::getTransposePaddingsAttrName(*odsOpName)) {
      tblgen_transpose_paddings = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_padding_values && !((tblgen_padding_values.isa<::mlir::ArrayAttr>())))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'padding_values' failed to satisfy constraint: array attribute");

  if (tblgen_padding_dimensions && !(((tblgen_padding_dimensions.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_padding_dimensions.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'padding_dimensions' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_pack_paddings && !(((tblgen_pack_paddings.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_pack_paddings.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'pack_paddings' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_hoist_paddings && !(((tblgen_hoist_paddings.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_hoist_paddings.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'hoist_paddings' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_transpose_paddings && !(((tblgen_transpose_paddings.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_transpose_paddings.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(attr.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))); }))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'transpose_paddings' failed to satisfy constraint: array of arrays of i64");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> PadOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange PadOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> PadOp::getTransformed() {
  return *getODSResults(0).begin();
}

::mlir::ArrayAttr PadOp::getPaddingValuesAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getPaddingValuesAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr PadOp::getPaddingValues() {
  auto attr = getPaddingValuesAttr();
  return attr;
}

::mlir::ArrayAttr PadOp::getPaddingDimensionsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getPaddingDimensionsAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr PadOp::getPaddingDimensions() {
  auto attr = getPaddingDimensionsAttr();
  return attr;
}

::mlir::ArrayAttr PadOp::getPackPaddingsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getPackPaddingsAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr PadOp::getPackPaddings() {
  auto attr = getPackPaddingsAttr();
  return attr;
}

::mlir::ArrayAttr PadOp::getHoistPaddingsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getHoistPaddingsAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr PadOp::getHoistPaddings() {
  auto attr = getHoistPaddingsAttr();
  return attr;
}

::mlir::ArrayAttr PadOp::getTransposePaddingsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getTransposePaddingsAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr PadOp::getTransposePaddings() {
  auto attr = getTransposePaddingsAttr();
  return attr;
}

void PadOp::setPaddingValuesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getPaddingValuesAttrName(), attr);
}

void PadOp::setPaddingDimensionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getPaddingDimensionsAttrName(), attr);
}

void PadOp::setPackPaddingsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getPackPaddingsAttrName(), attr);
}

void PadOp::setHoistPaddingsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getHoistPaddingsAttrName(), attr);
}

void PadOp::setTransposePaddingsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTransposePaddingsAttrName(), attr);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr hoist_paddings, ::mlir::ArrayAttr transpose_paddings) {
  odsState.addOperands(target);
  if (padding_values) {
    odsState.addAttribute(getPaddingValuesAttrName(odsState.name), padding_values);
  }
  if (padding_dimensions) {
    odsState.addAttribute(getPaddingDimensionsAttrName(odsState.name), padding_dimensions);
  }
  if (pack_paddings) {
    odsState.addAttribute(getPackPaddingsAttrName(odsState.name), pack_paddings);
  }
  if (hoist_paddings) {
    odsState.addAttribute(getHoistPaddingsAttrName(odsState.name), hoist_paddings);
  }
  if (transpose_paddings) {
    odsState.addAttribute(getTransposePaddingsAttrName(odsState.name), transpose_paddings);
  }
  odsState.addTypes(transformed);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr hoist_paddings, ::mlir::ArrayAttr transpose_paddings) {
  odsState.addOperands(target);
  if (padding_values) {
    odsState.addAttribute(getPaddingValuesAttrName(odsState.name), padding_values);
  }
  if (padding_dimensions) {
    odsState.addAttribute(getPaddingDimensionsAttrName(odsState.name), padding_dimensions);
  }
  if (pack_paddings) {
    odsState.addAttribute(getPackPaddingsAttrName(odsState.name), pack_paddings);
  }
  if (hoist_paddings) {
    odsState.addAttribute(getHoistPaddingsAttrName(odsState.name), hoist_paddings);
  }
  if (transpose_paddings) {
    odsState.addAttribute(getTransposePaddingsAttrName(odsState.name), transpose_paddings);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PadOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[3])) {
    attributes.append(attrNames[3], odsBuilder.getArrayAttr({}));
  }
  if (!attributes.get(attrNames[2])) {
    attributes.append(attrNames[2], odsBuilder.getI64ArrayAttr({}));
  }
  if (!attributes.get(attrNames[1])) {
    attributes.append(attrNames[1], odsBuilder.getI64ArrayAttr({}));
  }
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], odsBuilder.getI64ArrayAttr({}));
  }
  if (!attributes.get(attrNames[4])) {
    attributes.append(attrNames[4], odsBuilder.getArrayAttr({}));
  }
}

::mlir::LogicalResult PadOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_hoist_paddings;
  ::mlir::Attribute tblgen_pack_paddings;
  ::mlir::Attribute tblgen_padding_dimensions;
  ::mlir::Attribute tblgen_padding_values;
  ::mlir::Attribute tblgen_transpose_paddings;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getHoistPaddingsAttrName()) {
      tblgen_hoist_paddings = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getPackPaddingsAttrName()) {
      tblgen_pack_paddings = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getPaddingDimensionsAttrName()) {
      tblgen_padding_dimensions = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getPaddingValuesAttrName()) {
      tblgen_padding_values = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getTransposePaddingsAttrName()) {
      tblgen_transpose_paddings = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps8(*this, tblgen_padding_values, "padding_values")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(*this, tblgen_padding_dimensions, "padding_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(*this, tblgen_pack_paddings, "pack_paddings")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(*this, tblgen_hoist_paddings, "hoist_paddings")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps9(*this, tblgen_transpose_paddings, "transpose_paddings")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult PadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPaddingValuesAttr();
     if(attr && (attr == odsBuilder.getArrayAttr({})))
       elidedAttrs.push_back("padding_values");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPaddingDimensionsAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("padding_dimensions");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPackPaddingsAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("pack_paddings");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getHoistPaddingsAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("hoist_paddings");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTransposePaddingsAttr();
     if(attr && (attr == odsBuilder.getArrayAttr({})))
       elidedAttrs.push_back("transpose_paddings");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PromoteOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PromoteOpGenericAdaptorBase::PromoteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.promote", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> PromoteOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr PromoteOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getOperandsToPromoteAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PromoteOp::getOperandsToPromoteAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getOperandsToPromote() {
  auto attr = getOperandsToPromoteAttr();
  return attr;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getUseFullTileBuffersAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PromoteOp::getUseFullTileBuffersAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getUseFullTileBuffers() {
  auto attr = getUseFullTileBuffersAttr();
  return attr;
}

::mlir::UnitAttr PromoteOpGenericAdaptorBase::getUseFullTilesByDefaultAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PromoteOp::getUseFullTilesByDefaultAttrName(*odsOpName)).dyn_cast_or_null<::mlir::UnitAttr>();
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool PromoteOpGenericAdaptorBase::getUseFullTilesByDefault() {
  auto attr = getUseFullTilesByDefaultAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr PromoteOpGenericAdaptorBase::getUseAllocaAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PromoteOp::getUseAllocaAttrName(*odsOpName)).dyn_cast_or_null<::mlir::UnitAttr>();
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool PromoteOpGenericAdaptorBase::getUseAlloca() {
  auto attr = getUseAllocaAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::IntegerAttr PromoteOpGenericAdaptorBase::getAlignmentAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, PromoteOp::getAlignmentAttrName(*odsOpName)).dyn_cast_or_null<::mlir::IntegerAttr>();
  return attr;
}

::std::optional<uint64_t> PromoteOpGenericAdaptorBase::getAlignment() {
  auto attr = getAlignmentAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
PromoteOpAdaptor::PromoteOpAdaptor(PromoteOp op) : PromoteOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult PromoteOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_alignment;
  ::mlir::Attribute tblgen_operands_to_promote;
  ::mlir::Attribute tblgen_use_alloca;
  ::mlir::Attribute tblgen_use_full_tile_buffers;
  ::mlir::Attribute tblgen_use_full_tiles_by_default;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == PromoteOp::getAlignmentAttrName(*odsOpName)) {
      tblgen_alignment = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == PromoteOp::getOperandsToPromoteAttrName(*odsOpName)) {
      tblgen_operands_to_promote = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == PromoteOp::getUseAllocaAttrName(*odsOpName)) {
      tblgen_use_alloca = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == PromoteOp::getUseFullTileBuffersAttrName(*odsOpName)) {
      tblgen_use_full_tile_buffers = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == PromoteOp::getUseFullTilesByDefaultAttrName(*odsOpName)) {
      tblgen_use_full_tiles_by_default = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_operands_to_promote && !(((tblgen_operands_to_promote.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_operands_to_promote.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && (((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'operands_to_promote' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_use_full_tile_buffers && !(((tblgen_use_full_tile_buffers.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_use_full_tile_buffers.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && ((attr.isa<::mlir::BoolAttr>())); }))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'use_full_tile_buffers' failed to satisfy constraint: 1-bit boolean array attribute");

  if (tblgen_use_full_tiles_by_default && !((tblgen_use_full_tiles_by_default.isa<::mlir::UnitAttr>())))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'use_full_tiles_by_default' failed to satisfy constraint: unit attribute");

  if (tblgen_use_alloca && !((tblgen_use_alloca.isa<::mlir::UnitAttr>())))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'use_alloca' failed to satisfy constraint: unit attribute");

  if (tblgen_alignment && !(((tblgen_alignment.isa<::mlir::IntegerAttr>())) && ((tblgen_alignment.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'alignment' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PromoteOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range PromoteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> PromoteOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange PromoteOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> PromoteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range PromoteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> PromoteOp::getTransformed() {
  return *getODSResults(0).begin();
}

::mlir::ArrayAttr PromoteOp::getOperandsToPromoteAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandsToPromoteAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr PromoteOp::getOperandsToPromote() {
  auto attr = getOperandsToPromoteAttr();
  return attr;
}

::mlir::ArrayAttr PromoteOp::getUseFullTileBuffersAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getUseFullTileBuffersAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::mlir::ArrayAttr PromoteOp::getUseFullTileBuffers() {
  auto attr = getUseFullTileBuffersAttr();
  return attr;
}

::mlir::UnitAttr PromoteOp::getUseFullTilesByDefaultAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getUseFullTilesByDefaultAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool PromoteOp::getUseFullTilesByDefault() {
  auto attr = getUseFullTilesByDefaultAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr PromoteOp::getUseAllocaAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getUseAllocaAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool PromoteOp::getUseAlloca() {
  auto attr = getUseAllocaAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::IntegerAttr PromoteOp::getAlignmentAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getAlignmentAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

::std::optional<uint64_t> PromoteOp::getAlignment() {
  auto attr = getAlignmentAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void PromoteOp::setOperandsToPromoteAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getOperandsToPromoteAttrName(), attr);
}

void PromoteOp::setUseFullTileBuffersAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getUseFullTileBuffersAttrName(), attr);
}

void PromoteOp::setUseFullTilesByDefaultAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUseFullTilesByDefaultAttrName(), attr);
}

void PromoteOp::setUseFullTilesByDefault(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUseFullTilesByDefaultAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUseFullTilesByDefaultAttrName());
}

void PromoteOp::setUseAllocaAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUseAllocaAttrName(), attr);
}

void PromoteOp::setUseAlloca(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUseAllocaAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUseAllocaAttrName());
}

void PromoteOp::setAlignmentAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAlignmentAttrName(), attr);
}

void PromoteOp::setAlignment(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getAlignmentAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getAlignmentAttrName());
}

::mlir::Attribute PromoteOp::removeUseFullTilesByDefaultAttr() {
  return (*this)->removeAttr(getUseFullTilesByDefaultAttrName());
}

::mlir::Attribute PromoteOp::removeUseAllocaAttr() {
  return (*this)->removeAttr(getUseAllocaAttrName());
}

::mlir::Attribute PromoteOp::removeAlignmentAttr() {
  return (*this)->removeAttr(getAlignmentAttrName());
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  if (operands_to_promote) {
    odsState.addAttribute(getOperandsToPromoteAttrName(odsState.name), operands_to_promote);
  }
  if (use_full_tile_buffers) {
    odsState.addAttribute(getUseFullTileBuffersAttrName(odsState.name), use_full_tile_buffers);
  }
  if (use_full_tiles_by_default) {
    odsState.addAttribute(getUseFullTilesByDefaultAttrName(odsState.name), use_full_tiles_by_default);
  }
  if (use_alloca) {
    odsState.addAttribute(getUseAllocaAttrName(odsState.name), use_alloca);
  }
  if (alignment) {
    odsState.addAttribute(getAlignmentAttrName(odsState.name), alignment);
  }
  odsState.addTypes(transformed);
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  if (operands_to_promote) {
    odsState.addAttribute(getOperandsToPromoteAttrName(odsState.name), operands_to_promote);
  }
  if (use_full_tile_buffers) {
    odsState.addAttribute(getUseFullTileBuffersAttrName(odsState.name), use_full_tile_buffers);
  }
  if (use_full_tiles_by_default) {
    odsState.addAttribute(getUseFullTilesByDefaultAttrName(odsState.name), use_full_tiles_by_default);
  }
  if (use_alloca) {
    odsState.addAttribute(getUseAllocaAttrName(odsState.name), use_alloca);
  }
  if (alignment) {
    odsState.addAttribute(getAlignmentAttrName(odsState.name), alignment);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  odsState.addAttribute(getOperandsToPromoteAttrName(odsState.name), operands_to_promote);
  odsState.addAttribute(getUseFullTileBuffersAttrName(odsState.name), use_full_tile_buffers);
  if (use_full_tiles_by_default) {
    odsState.addAttribute(getUseFullTilesByDefaultAttrName(odsState.name), ((use_full_tiles_by_default) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (use_alloca) {
    odsState.addAttribute(getUseAllocaAttrName(odsState.name), ((use_alloca) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (alignment) {
    odsState.addAttribute(getAlignmentAttrName(odsState.name), alignment);
  }
  odsState.addTypes(transformed);
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  odsState.addAttribute(getOperandsToPromoteAttrName(odsState.name), operands_to_promote);
  odsState.addAttribute(getUseFullTileBuffersAttrName(odsState.name), use_full_tile_buffers);
  if (use_full_tiles_by_default) {
    odsState.addAttribute(getUseFullTilesByDefaultAttrName(odsState.name), ((use_full_tiles_by_default) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (use_alloca) {
    odsState.addAttribute(getUseAllocaAttrName(odsState.name), ((use_alloca) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (alignment) {
    odsState.addAttribute(getAlignmentAttrName(odsState.name), alignment);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PromoteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PromoteOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[1])) {
    attributes.append(attrNames[1], odsBuilder.getI64ArrayAttr({}));
  }
  if (!attributes.get(attrNames[3])) {
    attributes.append(attrNames[3], odsBuilder.getBoolArrayAttr({}));
  }
}

::mlir::LogicalResult PromoteOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_alignment;
  ::mlir::Attribute tblgen_operands_to_promote;
  ::mlir::Attribute tblgen_use_alloca;
  ::mlir::Attribute tblgen_use_full_tile_buffers;
  ::mlir::Attribute tblgen_use_full_tiles_by_default;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getAlignmentAttrName()) {
      tblgen_alignment = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getOperandsToPromoteAttrName()) {
      tblgen_operands_to_promote = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getUseAllocaAttrName()) {
      tblgen_use_alloca = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getUseFullTileBuffersAttrName()) {
      tblgen_use_full_tile_buffers = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getUseFullTilesByDefaultAttrName()) {
      tblgen_use_full_tiles_by_default = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(*this, tblgen_operands_to_promote, "operands_to_promote")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps10(*this, tblgen_use_full_tile_buffers, "use_full_tile_buffers")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_use_full_tiles_by_default, "use_full_tiles_by_default")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_use_alloca, "use_alloca")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_alignment, "alignment")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult PromoteOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PromoteOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PromoteOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOperandsToPromoteAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("operands_to_promote");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseFullTileBuffersAttr();
     if(attr && (attr == odsBuilder.getBoolArrayAttr({})))
       elidedAttrs.push_back("use_full_tile_buffers");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseFullTilesByDefaultAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_full_tiles_by_default");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseAllocaAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_alloca");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PromoteOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ReplaceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReplaceOpGenericAdaptorBase::ReplaceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.replace", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ReplaceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReplaceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &ReplaceOpGenericAdaptorBase::getBodyRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange ReplaceOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ReplaceOpAdaptor::ReplaceOpAdaptor(ReplaceOp op) : ReplaceOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult ReplaceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReplaceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReplaceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> ReplaceOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ReplaceOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReplaceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReplaceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> ReplaceOp::getReplacement() {
  return *getODSResults(0).begin();
}

::mlir::Region &ReplaceOp::getBodyRegion() {
  return (*this)->getRegion(0);
}

void ReplaceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type replacement, ::mlir::Value target) {
  odsState.addOperands(target);
  (void)odsState.addRegion();
  odsState.addTypes(replacement);
}

void ReplaceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReplaceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReplaceOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_LinalgTransformOps0(*this, region, "bodyRegion", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReplaceOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReplaceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<std::unique_ptr<::mlir::Region>, 2> fullRegions;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDictWithKeyword(result.attributes))
    return ::mlir::failure();

  {
    std::unique_ptr<::mlir::Region> region;
    auto firstRegionResult = parser.parseOptionalRegion(region);
    if (firstRegionResult.has_value()) {
      if (failed(*firstRegionResult))
        return ::mlir::failure();
      fullRegions.emplace_back(std::move(region));

      // Parse any trailing regions.
      while (succeeded(parser.parseOptionalComma())) {
        region = std::make_unique<::mlir::Region>();
        if (parser.parseRegion(*region))
          return ::mlir::failure();
        fullRegions.emplace_back(std::move(region));
      }
    }
  }

  for (auto &region : fullRegions)
    if (region->empty()) region->emplaceBlock();
  result.addRegions(fullRegions);
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReplaceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDictWithKeyword((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
    llvm::interleaveComma(getOperation()->getRegions(), _odsPrinter, [&](::mlir::Region &region) {
        _odsPrinter.printRegion(region);
    });
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ReplaceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ScalarizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScalarizeOpGenericAdaptorBase::ScalarizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.scalarize", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> ScalarizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ScalarizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ScalarizeOpAdaptor::ScalarizeOpAdaptor(ScalarizeOp op) : ScalarizeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult ScalarizeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScalarizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ScalarizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> ScalarizeOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ScalarizeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ScalarizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScalarizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> ScalarizeOp::getResult() {
  return *getODSResults(0).begin();
}

void ScalarizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(result);
}

void ScalarizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalarizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ScalarizeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ScalarizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalarizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalarizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ScalarizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SplitOpGenericAdaptorBase::SplitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.split", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> SplitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr SplitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr SplitOpGenericAdaptorBase::getDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, SplitOp::getDimensionAttrName(*odsOpName)).cast<::mlir::IntegerAttr>();
  return attr;
}

uint64_t SplitOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr SplitOpGenericAdaptorBase::getStaticSplitPointAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, SplitOp::getStaticSplitPointAttrName(*odsOpName)).cast<::mlir::IntegerAttr>();
  return attr;
}

uint64_t SplitOpGenericAdaptorBase::getStaticSplitPoint() {
  auto attr = getStaticSplitPointAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
SplitOpAdaptor::SplitOpAdaptor(SplitOp op) : SplitOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult SplitOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'transform.structured.split' op ""requires attribute 'dimension'");
    if (namedAttrIt->getName() == SplitOp::getDimensionAttrName(*odsOpName)) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_static_split_point;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'transform.structured.split' op ""requires attribute 'static_split_point'");
    if (namedAttrIt->getName() == SplitOp::getStaticSplitPointAttrName(*odsOpName)) {
      tblgen_static_split_point = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_dimension && !(((tblgen_dimension.isa<::mlir::IntegerAttr>())) && ((tblgen_dimension.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split' op ""attribute 'dimension' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_static_split_point && !(((tblgen_static_split_point.isa<::mlir::IntegerAttr>())) && ((tblgen_static_split_point.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split' op ""attribute 'static_split_point' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

void SplitOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "first");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "second");
}

std::pair<unsigned, unsigned> SplitOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SplitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::Value SplitOp::getDynamicSplitPoint() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : *operands.begin();
}

::mlir::MutableOperandRange SplitOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange SplitOp::getDynamicSplitPointMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SplitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SplitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitOp::getFirst() {
  return *getODSResults(0).begin();
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> SplitOp::getSecond() {
  return *getODSResults(1).begin();
}

::mlir::IntegerAttr SplitOp::getDimensionAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getDimensionAttrName()).cast<::mlir::IntegerAttr>();
}

uint64_t SplitOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr SplitOp::getStaticSplitPointAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getStaticSplitPointAttrName()).cast<::mlir::IntegerAttr>();
}

uint64_t SplitOp::getStaticSplitPoint() {
  auto attr = getStaticSplitPointAttr();
  return attr.getValue().getZExtValue();
}

void SplitOp::setDimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getDimensionAttrName(), attr);
}

void SplitOp::setDimension(uint64_t attrValue) {
  (*this)->setAttr(getDimensionAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void SplitOp::setStaticSplitPointAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getStaticSplitPointAttrName(), attr);
}

void SplitOp::setStaticSplitPoint(uint64_t attrValue) {
  (*this)->setAttr(getStaticSplitPointAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_split_point, ::mlir::IntegerAttr static_split_point) {
  odsState.addOperands(target);
  if (dynamic_split_point)
    odsState.addOperands(dynamic_split_point);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  odsState.addAttribute(getStaticSplitPointAttrName(odsState.name), static_split_point);
  odsState.addTypes(first);
  odsState.addTypes(second);
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_split_point, ::mlir::IntegerAttr static_split_point) {
  odsState.addOperands(target);
  if (dynamic_split_point)
    odsState.addOperands(dynamic_split_point);
  odsState.addAttribute(getDimensionAttrName(odsState.name), dimension);
  odsState.addAttribute(getStaticSplitPointAttrName(odsState.name), static_split_point);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_split_point, uint64_t static_split_point) {
  odsState.addOperands(target);
  if (dynamic_split_point)
    odsState.addOperands(dynamic_split_point);
  odsState.addAttribute(getDimensionAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension));
  odsState.addAttribute(getStaticSplitPointAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), static_split_point));
  odsState.addTypes(first);
  odsState.addTypes(second);
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_split_point, uint64_t static_split_point) {
  odsState.addOperands(target);
  if (dynamic_split_point)
    odsState.addOperands(dynamic_split_point);
  odsState.addAttribute(getDimensionAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension));
  odsState.addAttribute(getStaticSplitPointAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), static_split_point));
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SplitOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_dimension;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'dimension'");
    if (namedAttrIt->getName() == getDimensionAttrName()) {
      tblgen_dimension = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_static_split_point;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'static_split_point'");
    if (namedAttrIt->getName() == getStaticSplitPointAttrName()) {
      tblgen_static_split_point = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_static_split_point, "static_split_point")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SplitOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SplitOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitReductionOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SplitReductionOpGenericAdaptorBase::SplitReductionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.split_reduction", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> SplitReductionOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SplitReductionOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr SplitReductionOpGenericAdaptorBase::getSplitFactorAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, SplitReductionOp::getSplitFactorAttrName(*odsOpName)).dyn_cast_or_null<::mlir::IntegerAttr>();
  return attr;
}

uint64_t SplitReductionOpGenericAdaptorBase::getSplitFactor() {
  auto attr = getSplitFactorAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr SplitReductionOpGenericAdaptorBase::getInsertSplitDimensionAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, SplitReductionOp::getInsertSplitDimensionAttrName(*odsOpName)).dyn_cast_or_null<::mlir::IntegerAttr>();
  return attr;
}

uint64_t SplitReductionOpGenericAdaptorBase::getInsertSplitDimension() {
  auto attr = getInsertSplitDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr SplitReductionOpGenericAdaptorBase::getInnerParallelAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, SplitReductionOp::getInnerParallelAttrName(*odsOpName)).dyn_cast_or_null<::mlir::UnitAttr>();
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SplitReductionOpGenericAdaptorBase::getInnerParallel() {
  auto attr = getInnerParallelAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr SplitReductionOpGenericAdaptorBase::getUseScalingAlgorithmAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, SplitReductionOp::getUseScalingAlgorithmAttrName(*odsOpName)).dyn_cast_or_null<::mlir::UnitAttr>();
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SplitReductionOpGenericAdaptorBase::getUseScalingAlgorithm() {
  auto attr = getUseScalingAlgorithmAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr SplitReductionOpGenericAdaptorBase::getUseAllocAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, SplitReductionOp::getUseAllocAttrName(*odsOpName)).dyn_cast_or_null<::mlir::UnitAttr>();
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SplitReductionOpGenericAdaptorBase::getUseAlloc() {
  auto attr = getUseAllocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
SplitReductionOpAdaptor::SplitReductionOpAdaptor(SplitReductionOp op) : SplitReductionOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult SplitReductionOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_inner_parallel;
  ::mlir::Attribute tblgen_insert_split_dimension;
  ::mlir::Attribute tblgen_split_factor;
  ::mlir::Attribute tblgen_use_alloc;
  ::mlir::Attribute tblgen_use_scaling_algorithm;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == SplitReductionOp::getInnerParallelAttrName(*odsOpName)) {
      tblgen_inner_parallel = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == SplitReductionOp::getInsertSplitDimensionAttrName(*odsOpName)) {
      tblgen_insert_split_dimension = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == SplitReductionOp::getSplitFactorAttrName(*odsOpName)) {
      tblgen_split_factor = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == SplitReductionOp::getUseAllocAttrName(*odsOpName)) {
      tblgen_use_alloc = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == SplitReductionOp::getUseScalingAlgorithmAttrName(*odsOpName)) {
      tblgen_use_scaling_algorithm = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_split_factor && !(((tblgen_split_factor.isa<::mlir::IntegerAttr>())) && ((tblgen_split_factor.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'split_factor' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_insert_split_dimension && !(((tblgen_insert_split_dimension.isa<::mlir::IntegerAttr>())) && ((tblgen_insert_split_dimension.cast<::mlir::IntegerAttr>().getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'insert_split_dimension' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_inner_parallel && !((tblgen_inner_parallel.isa<::mlir::UnitAttr>())))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'inner_parallel' failed to satisfy constraint: unit attribute");

  if (tblgen_use_scaling_algorithm && !((tblgen_use_scaling_algorithm.isa<::mlir::UnitAttr>())))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'use_scaling_algorithm' failed to satisfy constraint: unit attribute");

  if (tblgen_use_alloc && !((tblgen_use_alloc.isa<::mlir::UnitAttr>())))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'use_alloc' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

void SplitReductionOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "init_or_alloc_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "fill_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "split_linalg_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "combining_linalg_op");
}

std::pair<unsigned, unsigned> SplitReductionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SplitReductionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> SplitReductionOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SplitReductionOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SplitReductionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SplitReductionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> SplitReductionOp::getInitOrAllocOp() {
  return *getODSResults(0).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> SplitReductionOp::getFillOp() {
  return *getODSResults(1).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> SplitReductionOp::getSplitLinalgOp() {
  return *getODSResults(2).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> SplitReductionOp::getCombiningLinalgOp() {
  return *getODSResults(3).begin();
}

::mlir::IntegerAttr SplitReductionOp::getSplitFactorAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getSplitFactorAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

uint64_t SplitReductionOp::getSplitFactor() {
  auto attr = getSplitFactorAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr SplitReductionOp::getInsertSplitDimensionAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getInsertSplitDimensionAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

uint64_t SplitReductionOp::getInsertSplitDimension() {
  auto attr = getInsertSplitDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr SplitReductionOp::getInnerParallelAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getInnerParallelAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool SplitReductionOp::getInnerParallel() {
  auto attr = getInnerParallelAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr SplitReductionOp::getUseScalingAlgorithmAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getUseScalingAlgorithmAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool SplitReductionOp::getUseScalingAlgorithm() {
  auto attr = getUseScalingAlgorithmAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr SplitReductionOp::getUseAllocAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getUseAllocAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool SplitReductionOp::getUseAlloc() {
  auto attr = getUseAllocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void SplitReductionOp::setSplitFactorAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getSplitFactorAttrName(), attr);
}

void SplitReductionOp::setSplitFactor(uint64_t attrValue) {
  (*this)->setAttr(getSplitFactorAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void SplitReductionOp::setInsertSplitDimensionAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getInsertSplitDimensionAttrName(), attr);
}

void SplitReductionOp::setInsertSplitDimension(uint64_t attrValue) {
  (*this)->setAttr(getInsertSplitDimensionAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void SplitReductionOp::setInnerParallelAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getInnerParallelAttrName(), attr);
}

void SplitReductionOp::setInnerParallel(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInnerParallelAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getInnerParallelAttrName());
}

void SplitReductionOp::setUseScalingAlgorithmAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUseScalingAlgorithmAttrName(), attr);
}

void SplitReductionOp::setUseScalingAlgorithm(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUseScalingAlgorithmAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUseScalingAlgorithmAttrName());
}

void SplitReductionOp::setUseAllocAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUseAllocAttrName(), attr);
}

void SplitReductionOp::setUseAlloc(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUseAllocAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUseAllocAttrName());
}

::mlir::Attribute SplitReductionOp::removeInnerParallelAttr() {
  return (*this)->removeAttr(getInnerParallelAttrName());
}

::mlir::Attribute SplitReductionOp::removeUseScalingAlgorithmAttr() {
  return (*this)->removeAttr(getUseScalingAlgorithmAttrName());
}

::mlir::Attribute SplitReductionOp::removeUseAllocAttr() {
  return (*this)->removeAttr(getUseAllocAttrName());
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension, /*optional*/::mlir::UnitAttr inner_parallel, /*optional*/::mlir::UnitAttr use_scaling_algorithm, /*optional*/::mlir::UnitAttr use_alloc) {
  odsState.addOperands(target);
  if (split_factor) {
    odsState.addAttribute(getSplitFactorAttrName(odsState.name), split_factor);
  }
  if (insert_split_dimension) {
    odsState.addAttribute(getInsertSplitDimensionAttrName(odsState.name), insert_split_dimension);
  }
  if (inner_parallel) {
    odsState.addAttribute(getInnerParallelAttrName(odsState.name), inner_parallel);
  }
  if (use_scaling_algorithm) {
    odsState.addAttribute(getUseScalingAlgorithmAttrName(odsState.name), use_scaling_algorithm);
  }
  if (use_alloc) {
    odsState.addAttribute(getUseAllocAttrName(odsState.name), use_alloc);
  }
  odsState.addTypes(init_or_alloc_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension, /*optional*/::mlir::UnitAttr inner_parallel, /*optional*/::mlir::UnitAttr use_scaling_algorithm, /*optional*/::mlir::UnitAttr use_alloc) {
  odsState.addOperands(target);
  if (split_factor) {
    odsState.addAttribute(getSplitFactorAttrName(odsState.name), split_factor);
  }
  if (insert_split_dimension) {
    odsState.addAttribute(getInsertSplitDimensionAttrName(odsState.name), insert_split_dimension);
  }
  if (inner_parallel) {
    odsState.addAttribute(getInnerParallelAttrName(odsState.name), inner_parallel);
  }
  if (use_scaling_algorithm) {
    odsState.addAttribute(getUseScalingAlgorithmAttrName(odsState.name), use_scaling_algorithm);
  }
  if (use_alloc) {
    odsState.addAttribute(getUseAllocAttrName(odsState.name), use_alloc);
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, uint64_t split_factor, uint64_t insert_split_dimension, /*optional*/bool inner_parallel, /*optional*/bool use_scaling_algorithm, /*optional*/bool use_alloc) {
  odsState.addOperands(target);
  odsState.addAttribute(getSplitFactorAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), split_factor));
  odsState.addAttribute(getInsertSplitDimensionAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), insert_split_dimension));
  if (inner_parallel) {
    odsState.addAttribute(getInnerParallelAttrName(odsState.name), ((inner_parallel) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (use_scaling_algorithm) {
    odsState.addAttribute(getUseScalingAlgorithmAttrName(odsState.name), ((use_scaling_algorithm) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (use_alloc) {
    odsState.addAttribute(getUseAllocAttrName(odsState.name), ((use_alloc) ? odsBuilder.getUnitAttr() : nullptr));
  }
  odsState.addTypes(init_or_alloc_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t split_factor, uint64_t insert_split_dimension, /*optional*/bool inner_parallel, /*optional*/bool use_scaling_algorithm, /*optional*/bool use_alloc) {
  odsState.addOperands(target);
  odsState.addAttribute(getSplitFactorAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), split_factor));
  odsState.addAttribute(getInsertSplitDimensionAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), insert_split_dimension));
  if (inner_parallel) {
    odsState.addAttribute(getInnerParallelAttrName(odsState.name), ((inner_parallel) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (use_scaling_algorithm) {
    odsState.addAttribute(getUseScalingAlgorithmAttrName(odsState.name), ((use_scaling_algorithm) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (use_alloc) {
    odsState.addAttribute(getUseAllocAttrName(odsState.name), ((use_alloc) ? odsBuilder.getUnitAttr() : nullptr));
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitReductionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SplitReductionOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[2])) {
    attributes.append(attrNames[2], odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {}));
  }
  if (!attributes.get(attrNames[1])) {
    attributes.append(attrNames[1], odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {}));
  }
}

::mlir::LogicalResult SplitReductionOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_inner_parallel;
  ::mlir::Attribute tblgen_insert_split_dimension;
  ::mlir::Attribute tblgen_split_factor;
  ::mlir::Attribute tblgen_use_alloc;
  ::mlir::Attribute tblgen_use_scaling_algorithm;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getInnerParallelAttrName()) {
      tblgen_inner_parallel = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getInsertSplitDimensionAttrName()) {
      tblgen_insert_split_dimension = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getSplitFactorAttrName()) {
      tblgen_split_factor = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getUseAllocAttrName()) {
      tblgen_use_alloc = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getUseScalingAlgorithmAttrName()) {
      tblgen_use_scaling_algorithm = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_split_factor, "split_factor")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_insert_split_dimension, "insert_split_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_inner_parallel, "inner_parallel")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_use_scaling_algorithm, "use_scaling_algorithm")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_use_alloc, "use_alloc")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SplitReductionOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SplitReductionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SplitReductionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSplitFactorAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {})))
       elidedAttrs.push_back("split_factor");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInsertSplitDimensionAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {})))
       elidedAttrs.push_back("insert_split_dimension");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInnerParallelAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("inner_parallel");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseScalingAlgorithmAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_scaling_algorithm");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseAllocAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_alloc");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SplitReductionOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileOpGenericAdaptorBase::TileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.tile", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TileOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr TileOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileOpGenericAdaptorBase::getStaticSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TileOp::getStaticSizesAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileOpGenericAdaptorBase::getStaticSizes() {
  auto attr = getStaticSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileOpGenericAdaptorBase::getInterchangeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TileOp::getInterchangeAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileOpGenericAdaptorBase::getInterchange() {
  auto attr = getInterchangeAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
TileOpAdaptor::TileOpAdaptor(TileOp op) : TileOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult TileOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_interchange;
  ::mlir::Attribute tblgen_static_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == TileOp::getInterchangeAttrName(*odsOpName)) {
      tblgen_interchange = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == TileOp::getStaticSizesAttrName(*odsOpName)) {
      tblgen_static_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_static_sizes && !((tblgen_static_sizes.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.tile' op ""attribute 'static_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_interchange && !((tblgen_interchange.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.tile' op ""attribute 'interchange' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

void TileOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "tiled_linalg_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "loops");
}

std::pair<unsigned, unsigned> TileOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range TileOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range TileOp::getDynamicSizes() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange TileOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange TileOp::getDynamicSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range TileOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> TileOp::getTiledLinalgOp() {
  return *getODSResults(0).begin();
}

::mlir::Operation::result_range TileOp::getLoops() {
  return getODSResults(1);
}

::mlir::DenseI64ArrayAttr TileOp::getStaticSizesAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getStaticSizesAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> TileOp::getStaticSizes() {
  auto attr = getStaticSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileOp::getInterchangeAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getInterchangeAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> TileOp::getInterchange() {
  auto attr = getInterchangeAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void TileOp::setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticSizesAttrName(), attr);
}

void TileOp::setStaticSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getStaticSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getStaticSizesAttrName());
}

void TileOp::setInterchangeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getInterchangeAttrName(), attr);
}

void TileOp::setInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInterchangeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getInterchangeAttrName());
}

::mlir::Attribute TileOp::removeStaticSizesAttr() {
  return (*this)->removeAttr(getStaticSizesAttrName());
}

::mlir::Attribute TileOp::removeInterchangeAttr() {
  return (*this)->removeAttr(getInterchangeAttrName());
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  if (static_sizes) {
    odsState.addAttribute(getStaticSizesAttrName(odsState.name), static_sizes);
  }
  if (interchange) {
    odsState.addAttribute(getInterchangeAttrName(odsState.name), interchange);
  }
  odsState.addTypes(tiled_linalg_op);
  odsState.addTypes(loops);
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  if (static_sizes) {
    odsState.addAttribute(getStaticSizesAttrName(odsState.name), static_sizes);
  }
  if (interchange) {
    odsState.addAttribute(getInterchangeAttrName(odsState.name), interchange);
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes, /*optional*/::llvm::ArrayRef<int64_t> interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  odsState.addAttribute(getStaticSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_sizes));
  odsState.addAttribute(getInterchangeAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(interchange));
  odsState.addTypes(tiled_linalg_op);
  odsState.addTypes(loops);
}

void TileOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes, /*optional*/::llvm::ArrayRef<int64_t> interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  odsState.addAttribute(getStaticSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_sizes));
  odsState.addAttribute(getInterchangeAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(interchange));
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_interchange;
  ::mlir::Attribute tblgen_static_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getInterchangeAttrName()) {
      tblgen_interchange = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getStaticSizesAttrName()) {
      tblgen_static_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_static_sizes, "static_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_interchange, "interchange")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingForeachThreadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileReductionUsingForeachThreadOpGenericAdaptorBase::TileReductionUsingForeachThreadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.tile_reduction_using_foreach_thread", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TileReductionUsingForeachThreadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TileReductionUsingForeachThreadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileReductionUsingForeachThreadOpGenericAdaptorBase::getNumThreadsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TileReductionUsingForeachThreadOp::getNumThreadsAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  return attr;
}

::llvm::ArrayRef<int64_t> TileReductionUsingForeachThreadOpGenericAdaptorBase::getNumThreads() {
  auto attr = getNumThreadsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr TileReductionUsingForeachThreadOpGenericAdaptorBase::getTileSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TileReductionUsingForeachThreadOp::getTileSizesAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  return attr;
}

::llvm::ArrayRef<int64_t> TileReductionUsingForeachThreadOpGenericAdaptorBase::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::mlir::ArrayAttr TileReductionUsingForeachThreadOpGenericAdaptorBase::getMappingAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TileReductionUsingForeachThreadOp::getMappingAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TileReductionUsingForeachThreadOpGenericAdaptorBase::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
TileReductionUsingForeachThreadOpAdaptor::TileReductionUsingForeachThreadOpAdaptor(TileReductionUsingForeachThreadOp op) : TileReductionUsingForeachThreadOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult TileReductionUsingForeachThreadOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_mapping;
  ::mlir::Attribute tblgen_num_threads;
  ::mlir::Attribute tblgen_tile_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == TileReductionUsingForeachThreadOp::getMappingAttrName(*odsOpName)) {
      tblgen_mapping = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == TileReductionUsingForeachThreadOp::getNumThreadsAttrName(*odsOpName)) {
      tblgen_num_threads = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == TileReductionUsingForeachThreadOp::getTileSizesAttrName(*odsOpName)) {
      tblgen_tile_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_num_threads && !((tblgen_num_threads.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.tile_reduction_using_foreach_thread' op ""attribute 'num_threads' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_tile_sizes && !((tblgen_tile_sizes.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.tile_reduction_using_foreach_thread' op ""attribute 'tile_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_mapping && !(((tblgen_mapping.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_mapping.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && ((attr.isa<::mlir::DeviceMappingAttrInterface>())); }))))
    return emitError(loc, "'transform.structured.tile_reduction_using_foreach_thread' op ""attribute 'mapping' failed to satisfy constraint: Device Mapping array attribute");
  return ::mlir::success();
}

void TileReductionUsingForeachThreadOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "foreach_thread_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "fill_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "split_linalg_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "combining_linalg_op");
}

std::pair<unsigned, unsigned> TileReductionUsingForeachThreadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TileReductionUsingForeachThreadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileReductionUsingForeachThreadOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TileReductionUsingForeachThreadOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileReductionUsingForeachThreadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileReductionUsingForeachThreadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileReductionUsingForeachThreadOp::getForeachThreadOp() {
  return *getODSResults(0).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileReductionUsingForeachThreadOp::getFillOp() {
  return *getODSResults(1).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileReductionUsingForeachThreadOp::getSplitLinalgOp() {
  return *getODSResults(2).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileReductionUsingForeachThreadOp::getCombiningLinalgOp() {
  return *getODSResults(3).begin();
}

::mlir::DenseI64ArrayAttr TileReductionUsingForeachThreadOp::getNumThreadsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getNumThreadsAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> TileReductionUsingForeachThreadOp::getNumThreads() {
  auto attr = getNumThreadsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr TileReductionUsingForeachThreadOp::getTileSizesAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getTileSizesAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> TileReductionUsingForeachThreadOp::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::mlir::ArrayAttr TileReductionUsingForeachThreadOp::getMappingAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getMappingAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::std::optional< ::mlir::ArrayAttr > TileReductionUsingForeachThreadOp::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TileReductionUsingForeachThreadOp::setNumThreadsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getNumThreadsAttrName(), attr);
}

void TileReductionUsingForeachThreadOp::setNumThreads(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getNumThreadsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TileReductionUsingForeachThreadOp::setTileSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getTileSizesAttrName(), attr);
}

void TileReductionUsingForeachThreadOp::setTileSizes(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getTileSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TileReductionUsingForeachThreadOp::setMappingAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getMappingAttrName(), attr);
}

::mlir::Attribute TileReductionUsingForeachThreadOp::removeMappingAttr() {
  return (*this)->removeAttr(getMappingAttrName());
}

void TileReductionUsingForeachThreadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type foreach_thread_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  if (num_threads) {
    odsState.addAttribute(getNumThreadsAttrName(odsState.name), num_threads);
  }
  if (tile_sizes) {
    odsState.addAttribute(getTileSizesAttrName(odsState.name), tile_sizes);
  }
  if (mapping) {
    odsState.addAttribute(getMappingAttrName(odsState.name), mapping);
  }
  odsState.addTypes(foreach_thread_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void TileReductionUsingForeachThreadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  if (num_threads) {
    odsState.addAttribute(getNumThreadsAttrName(odsState.name), num_threads);
  }
  if (tile_sizes) {
    odsState.addAttribute(getTileSizesAttrName(odsState.name), tile_sizes);
  }
  if (mapping) {
    odsState.addAttribute(getMappingAttrName(odsState.name), mapping);
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingForeachThreadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type foreach_thread_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addAttribute(getNumThreadsAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(num_threads));
  odsState.addAttribute(getTileSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(tile_sizes));
  if (mapping) {
    odsState.addAttribute(getMappingAttrName(odsState.name), mapping);
  }
  odsState.addTypes(foreach_thread_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void TileReductionUsingForeachThreadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addAttribute(getNumThreadsAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(num_threads));
  odsState.addAttribute(getTileSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(tile_sizes));
  if (mapping) {
    odsState.addAttribute(getMappingAttrName(odsState.name), mapping);
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingForeachThreadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingForeachThreadOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[1])) {
    attributes.append(attrNames[1], odsBuilder.getDenseI64ArrayAttr({}));
  }
  if (!attributes.get(attrNames[2])) {
    attributes.append(attrNames[2], odsBuilder.getDenseI64ArrayAttr({}));
  }
}

::mlir::LogicalResult TileReductionUsingForeachThreadOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_mapping;
  ::mlir::Attribute tblgen_num_threads;
  ::mlir::Attribute tblgen_tile_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getMappingAttrName()) {
      tblgen_mapping = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getNumThreadsAttrName()) {
      tblgen_num_threads = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getTileSizesAttrName()) {
      tblgen_tile_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_num_threads, "num_threads")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_tile_sizes, "tile_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps12(*this, tblgen_mapping, "mapping")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileReductionUsingForeachThreadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TileReductionUsingForeachThreadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr num_threadsAttr;
  ::mlir::DenseI64ArrayAttr tile_sizesAttr;
  ::mlir::ArrayAttr mappingAttr;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("num_threads"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(num_threadsAttr, ::mlir::Type{}, "num_threads",
          result.attributes)) {
    return ::mlir::failure();
  }
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("tile_sizes"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(tile_sizesAttr, ::mlir::Type{}, "tile_sizes",
          result.attributes)) {
    return ::mlir::failure();
  }
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("mapping"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mappingAttr, parser.getBuilder().getType<::mlir::NoneType>(), "mapping",
          result.attributes)) {
    return ::mlir::failure();
  }
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileReductionUsingForeachThreadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "by";
  if ((*this)->getAttr("num_threads") != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ' ' << "num_threads";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getNumThreadsAttr());
  }
  if ((*this)->getAttr("tile_sizes") != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "tile_sizes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getTileSizesAttr());
  }
  if ((*this)->getAttr("mapping")) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "mapping";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getMappingAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("num_threads");
  elidedAttrs.push_back("tile_sizes");
  elidedAttrs.push_back("mapping");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNumThreadsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("num_threads");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTileSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("tile_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingForeachThreadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingScfOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileReductionUsingScfOpGenericAdaptorBase::TileReductionUsingScfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.tile_reduction_using_scf", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TileReductionUsingScfOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TileReductionUsingScfOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileReductionUsingScfOpGenericAdaptorBase::getTileSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TileReductionUsingScfOp::getTileSizesAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  return attr;
}

::llvm::ArrayRef<int64_t> TileReductionUsingScfOpGenericAdaptorBase::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

} // namespace detail
TileReductionUsingScfOpAdaptor::TileReductionUsingScfOpAdaptor(TileReductionUsingScfOp op) : TileReductionUsingScfOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult TileReductionUsingScfOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_tile_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == TileReductionUsingScfOp::getTileSizesAttrName(*odsOpName)) {
      tblgen_tile_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_tile_sizes && !((tblgen_tile_sizes.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.tile_reduction_using_scf' op ""attribute 'tile_sizes' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

void TileReductionUsingScfOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "for_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "fill_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "split_linalg_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "combining_linalg_op");
}

std::pair<unsigned, unsigned> TileReductionUsingScfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TileReductionUsingScfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileReductionUsingScfOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TileReductionUsingScfOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileReductionUsingScfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileReductionUsingScfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileReductionUsingScfOp::getForOp() {
  return *getODSResults(0).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileReductionUsingScfOp::getFillOp() {
  return *getODSResults(1).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileReductionUsingScfOp::getSplitLinalgOp() {
  return *getODSResults(2).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileReductionUsingScfOp::getCombiningLinalgOp() {
  return *getODSResults(3).begin();
}

::mlir::DenseI64ArrayAttr TileReductionUsingScfOp::getTileSizesAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getTileSizesAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> TileReductionUsingScfOp::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

void TileReductionUsingScfOp::setTileSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getTileSizesAttrName(), attr);
}

void TileReductionUsingScfOp::setTileSizes(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getTileSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void TileReductionUsingScfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type for_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.addAttribute(getTileSizesAttrName(odsState.name), tile_sizes);
  }
  odsState.addTypes(for_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void TileReductionUsingScfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.addAttribute(getTileSizesAttrName(odsState.name), tile_sizes);
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingScfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type for_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes) {
  odsState.addOperands(target);
  odsState.addAttribute(getTileSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(tile_sizes));
  odsState.addTypes(for_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void TileReductionUsingScfOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes) {
  odsState.addOperands(target);
  odsState.addAttribute(getTileSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(tile_sizes));
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingScfOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingScfOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], odsBuilder.getDenseI64ArrayAttr({}));
  }
}

::mlir::LogicalResult TileReductionUsingScfOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_tile_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getTileSizesAttrName()) {
      tblgen_tile_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_tile_sizes, "tile_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileReductionUsingScfOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TileReductionUsingScfOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr tile_sizesAttr;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();
  if (parser.parseKeyword("tile_sizes"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(tile_sizesAttr, ::mlir::Type{}, "tile_sizes",
          result.attributes)) {
    return ::mlir::failure();
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileReductionUsingScfOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "by";
  _odsPrinter << ' ' << "tile_sizes";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getTileSizesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("tile_sizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTileSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("tile_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingScfOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileToForeachThreadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileToForeachThreadOpGenericAdaptorBase::TileToForeachThreadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.tile_to_foreach_thread_op", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TileToForeachThreadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TileToForeachThreadOp::getOperandSegmentSizesAttrName(*odsOpName)).cast<::mlir::DenseI32ArrayAttr>();

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TileToForeachThreadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileToForeachThreadOpGenericAdaptorBase::getStaticNumThreadsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, TileToForeachThreadOp::getStaticNumThreadsAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileToForeachThreadOpGenericAdaptorBase::getStaticNumThreads() {
  auto attr = getStaticNumThreadsAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileToForeachThreadOpGenericAdaptorBase::getStaticTileSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, TileToForeachThreadOp::getStaticTileSizesAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileToForeachThreadOpGenericAdaptorBase::getStaticTileSizes() {
  auto attr = getStaticTileSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::ArrayAttr TileToForeachThreadOpGenericAdaptorBase::getMappingAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, TileToForeachThreadOp::getMappingAttrName(*odsOpName)).dyn_cast_or_null<::mlir::ArrayAttr>();
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TileToForeachThreadOpGenericAdaptorBase::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
TileToForeachThreadOpAdaptor::TileToForeachThreadOpAdaptor(TileToForeachThreadOp op) : TileToForeachThreadOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult TileToForeachThreadOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operand_segment_sizes;
  ::mlir::Attribute tblgen_mapping;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'transform.structured.tile_to_foreach_thread_op' op ""requires attribute 'operand_segment_sizes'");
    if (namedAttrIt->getName() == TileToForeachThreadOp::getOperandSegmentSizesAttrName(*odsOpName)) {
      tblgen_operand_segment_sizes = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == TileToForeachThreadOp::getMappingAttrName(*odsOpName)) {
      tblgen_mapping = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_static_num_threads;
  ::mlir::Attribute tblgen_static_tile_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == TileToForeachThreadOp::getStaticNumThreadsAttrName(*odsOpName)) {
      tblgen_static_num_threads = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == TileToForeachThreadOp::getStaticTileSizesAttrName(*odsOpName)) {
      tblgen_static_tile_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = tblgen_operand_segment_sizes.cast<::mlir::DenseI32ArrayAttr>();
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 5)
      return emitError(loc, "'transform.structured.tile_to_foreach_thread_op' op ""'operand_segment_sizes' attribute for specifying operand segments must have 5 "
                "elements, but got ") << numElements;
  }

  if (tblgen_static_num_threads && !((tblgen_static_num_threads.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.tile_to_foreach_thread_op' op ""attribute 'static_num_threads' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_static_tile_sizes && !((tblgen_static_tile_sizes.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.tile_to_foreach_thread_op' op ""attribute 'static_tile_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_mapping && !(((tblgen_mapping.isa<::mlir::ArrayAttr>())) && (::llvm::all_of(tblgen_mapping.cast<::mlir::ArrayAttr>(), [&](::mlir::Attribute attr) { return attr && ((attr.isa<::mlir::DeviceMappingAttrInterface>())); }))))
    return emitError(loc, "'transform.structured.tile_to_foreach_thread_op' op ""attribute 'mapping' failed to satisfy constraint: Device Mapping array attribute");
  return ::mlir::success();
}

void TileToForeachThreadOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "foreach_thread_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "tiled_op");
}

std::pair<unsigned, unsigned> TileToForeachThreadOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName()).cast<::mlir::DenseI32ArrayAttr>();

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TileToForeachThreadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileToForeachThreadOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range TileToForeachThreadOp::getNumThreads() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range TileToForeachThreadOp::getTileSizes() {
  return getODSOperands(2);
}

::mlir::Value TileToForeachThreadOp::getPackedNumThreads() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::Value{} : *operands.begin();
}

::mlir::Value TileToForeachThreadOp::getPackedTileSizes() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::Value{} : *operands.begin();
}

::mlir::MutableOperandRange TileToForeachThreadOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange TileToForeachThreadOp::getNumThreadsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange TileToForeachThreadOp::getTileSizesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange TileToForeachThreadOp::getPackedNumThreadsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

::mlir::MutableOperandRange TileToForeachThreadOp::getPackedTileSizesMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, *::mlir::impl::getNamedAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getOperandSegmentSizesAttrName())));
  return mutableRange;
}

std::pair<unsigned, unsigned> TileToForeachThreadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TileToForeachThreadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileToForeachThreadOp::getForeachThreadOp() {
  return *getODSResults(0).begin();
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileToForeachThreadOp::getTiledOp() {
  return *getODSResults(1).begin();
}

::mlir::DenseI64ArrayAttr TileToForeachThreadOp::getStaticNumThreadsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getStaticNumThreadsAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> TileToForeachThreadOp::getStaticNumThreads() {
  auto attr = getStaticNumThreadsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileToForeachThreadOp::getStaticTileSizesAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getStaticTileSizesAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> TileToForeachThreadOp::getStaticTileSizes() {
  auto attr = getStaticTileSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::ArrayAttr TileToForeachThreadOp::getMappingAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getMappingAttrName()).dyn_cast_or_null<::mlir::ArrayAttr>();
}

::std::optional< ::mlir::ArrayAttr > TileToForeachThreadOp::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TileToForeachThreadOp::setStaticNumThreadsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticNumThreadsAttrName(), attr);
}

void TileToForeachThreadOp::setStaticNumThreads(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getStaticNumThreadsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getStaticNumThreadsAttrName());
}

void TileToForeachThreadOp::setStaticTileSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticTileSizesAttrName(), attr);
}

void TileToForeachThreadOp::setStaticTileSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getStaticTileSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getStaticTileSizesAttrName());
}

void TileToForeachThreadOp::setMappingAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getMappingAttrName(), attr);
}

::mlir::Attribute TileToForeachThreadOp::removeStaticNumThreadsAttr() {
  return (*this)->removeAttr(getStaticNumThreadsAttrName());
}

::mlir::Attribute TileToForeachThreadOp::removeStaticTileSizesAttr() {
  return (*this)->removeAttr(getStaticTileSizesAttrName());
}

::mlir::Attribute TileToForeachThreadOp::removeMappingAttr() {
  return (*this)->removeAttr(getMappingAttrName());
}

void TileToForeachThreadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type foreach_thread_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}));
  if (static_num_threads) {
    odsState.addAttribute(getStaticNumThreadsAttrName(odsState.name), static_num_threads);
  }
  if (static_tile_sizes) {
    odsState.addAttribute(getStaticTileSizesAttrName(odsState.name), static_tile_sizes);
  }
  if (mapping) {
    odsState.addAttribute(getMappingAttrName(odsState.name), mapping);
  }
  odsState.addTypes(foreach_thread_op);
  odsState.addTypes(tiled_op);
}

void TileToForeachThreadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}));
  if (static_num_threads) {
    odsState.addAttribute(getStaticNumThreadsAttrName(odsState.name), static_num_threads);
  }
  if (static_tile_sizes) {
    odsState.addAttribute(getStaticTileSizesAttrName(odsState.name), static_tile_sizes);
  }
  if (mapping) {
    odsState.addAttribute(getMappingAttrName(odsState.name), mapping);
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileToForeachThreadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type foreach_thread_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}));
  odsState.addAttribute(getStaticNumThreadsAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_num_threads));
  odsState.addAttribute(getStaticTileSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_tile_sizes));
  if (mapping) {
    odsState.addAttribute(getMappingAttrName(odsState.name), mapping);
  }
  odsState.addTypes(foreach_thread_op);
  odsState.addTypes(tiled_op);
}

void TileToForeachThreadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  odsState.addAttribute(getOperandSegmentSizesAttrName(odsState.name), odsBuilder.getDenseI32ArrayAttr({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}));
  odsState.addAttribute(getStaticNumThreadsAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_num_threads));
  odsState.addAttribute(getStaticTileSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_tile_sizes));
  if (mapping) {
    odsState.addAttribute(getMappingAttrName(odsState.name), mapping);
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileToForeachThreadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileToForeachThreadOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_operand_segment_sizes;
  ::mlir::Attribute tblgen_mapping;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'operand_segment_sizes'");
    if (namedAttrIt->getName() == getOperandSegmentSizesAttrName()) {
      tblgen_operand_segment_sizes = namedAttrIt->getValue();
      break;
    }
    else if (namedAttrIt->getName() == getMappingAttrName()) {
      tblgen_mapping = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_static_num_threads;
  ::mlir::Attribute tblgen_static_tile_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getStaticNumThreadsAttrName()) {
      tblgen_static_num_threads = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getStaticTileSizesAttrName()) {
      tblgen_static_tile_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  {
    auto sizeAttr = tblgen_operand_segment_sizes.cast<::mlir::DenseI32ArrayAttr>();
    auto numElements = sizeAttr.asArrayRef().size();
    if (numElements != 5)
      return emitOpError("'operand_segment_sizes' attribute for specifying operand segments must have 5 "
                "elements, but got ") << numElements;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_static_num_threads, "static_num_threads")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_static_tile_sizes, "static_tile_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps12(*this, tblgen_mapping, "mapping")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileToForeachThreadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TileToForeachThreadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> packed_num_threadsOperands;
  ::llvm::SMLoc packed_num_threadsOperandsLoc;
  (void)packed_num_threadsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> num_threadsOperands;
  ::llvm::SMLoc num_threadsOperandsLoc;
  (void)num_threadsOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_num_threadsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> packed_tile_sizesOperands;
  ::llvm::SMLoc packed_tile_sizesOperandsLoc;
  (void)packed_tile_sizesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> tile_sizesOperands;
  ::llvm::SMLoc tile_sizesOperandsLoc;
  (void)tile_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_tile_sizesAttr;
  ::mlir::ArrayAttr mappingAttr;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  bool num_threadsClause = false;
  bool tile_sizesClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("num_threads"))) {

  if (num_threadsClause) {
    return parser.emitError(parser.getNameLoc())
          << "`num_threads` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  num_threadsClause = true;
  {
    packed_num_threadsOperandsLoc = parser.getCurrentLocation();
    ::std::optional<::mlir::OpAsmParser::UnresolvedOperand> packed_num_threadsOperand;
    num_threadsOperandsLoc = parser.getCurrentLocation();
    if (parsePackedOrDynamicIndexList(parser, packed_num_threadsOperand, num_threadsOperands, static_num_threadsAttr))
      return ::mlir::failure();
    if (packed_num_threadsOperand.has_value())
      packed_num_threadsOperands.push_back(*packed_num_threadsOperand);
    if (static_num_threadsAttr)
      result.addAttribute("static_num_threads", static_num_threadsAttr);
  }
    } else if (succeeded(parser.parseOptionalKeyword("tile_sizes"))) {

  if (tile_sizesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`tile_sizes` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  tile_sizesClause = true;
  {
    packed_tile_sizesOperandsLoc = parser.getCurrentLocation();
    ::std::optional<::mlir::OpAsmParser::UnresolvedOperand> packed_tile_sizesOperand;
    tile_sizesOperandsLoc = parser.getCurrentLocation();
    if (parsePackedOrDynamicIndexList(parser, packed_tile_sizesOperand, tile_sizesOperands, static_tile_sizesAttr))
      return ::mlir::failure();
    if (packed_tile_sizesOperand.has_value())
      packed_tile_sizesOperands.push_back(*packed_tile_sizesOperand);
    if (static_tile_sizesAttr)
      result.addAttribute("static_tile_sizes", static_tile_sizesAttr);
  }
    } else  {
    break;
  }
}
  if (::mlir::succeeded(parser.parseOptionalLParen())) {
  if (parser.parseKeyword("mapping"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mappingAttr, parser.getBuilder().getType<::mlir::NoneType>(), "mapping",
          result.attributes)) {
    return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  result.addAttribute("operand_segment_sizes", parser.getBuilder().getDenseI32ArrayAttr({1, static_cast<int32_t>(num_threadsOperands.size()), static_cast<int32_t>(tile_sizesOperands.size()), static_cast<int32_t>(packed_num_threadsOperands.size()), static_cast<int32_t>(packed_tile_sizesOperands.size())}));
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(num_threadsOperands, odsBuildableType0, num_threadsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(tile_sizesOperands, odsBuildableType0, tile_sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(packed_num_threadsOperands, odsBuildableType0, packed_num_threadsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(packed_tile_sizesOperands, odsBuildableType0, packed_tile_sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileToForeachThreadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << " ";
  if (false || getPackedNumThreads() || getNumThreads().size() || getStaticNumThreadsAttr()) {
  _odsPrinter << ' ' << "num_threads";
  _odsPrinter << ' ';
  printPackedOrDynamicIndexList(_odsPrinter, *this, getPackedNumThreads(), getNumThreads(), getStaticNumThreadsAttr());
  }
  if (false || getPackedTileSizes() || getTileSizes().size() || getStaticTileSizesAttr()) {
  _odsPrinter << ' ' << "tile_sizes";
  _odsPrinter << ' ';
  printPackedOrDynamicIndexList(_odsPrinter, *this, getPackedTileSizes(), getTileSizes(), getStaticTileSizesAttr());
  }
  if ((*this)->getAttr("mapping")) {
    _odsPrinter << "(";
    _odsPrinter << "mapping";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getMappingAttr());
    _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operand_segment_sizes");
  elidedAttrs.push_back("static_num_threads");
  elidedAttrs.push_back("static_tile_sizes");
  elidedAttrs.push_back("mapping");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticNumThreadsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_num_threads");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticTileSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_tile_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileToForeachThreadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileToScfForOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileToScfForOpGenericAdaptorBase::TileToScfForOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.tile_to_scf_for", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> TileToScfForOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr TileToScfForOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr TileToScfForOpGenericAdaptorBase::getStaticSizesAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TileToScfForOp::getStaticSizesAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileToScfForOpGenericAdaptorBase::getStaticSizes() {
  auto attr = getStaticSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileToScfForOpGenericAdaptorBase::getInterchangeAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, TileToScfForOp::getInterchangeAttrName(*odsOpName)).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileToScfForOpGenericAdaptorBase::getInterchange() {
  auto attr = getInterchangeAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
TileToScfForOpAdaptor::TileToScfForOpAdaptor(TileToScfForOp op) : TileToScfForOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult TileToScfForOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_interchange;
  ::mlir::Attribute tblgen_static_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == TileToScfForOp::getInterchangeAttrName(*odsOpName)) {
      tblgen_interchange = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == TileToScfForOp::getStaticSizesAttrName(*odsOpName)) {
      tblgen_static_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_static_sizes && !((tblgen_static_sizes.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.tile_to_scf_for' op ""attribute 'static_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_interchange && !((tblgen_interchange.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.structured.tile_to_scf_for' op ""attribute 'interchange' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

void TileToScfForOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "tiled_linalg_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "loops");
}

std::pair<unsigned, unsigned> TileToScfForOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range TileToScfForOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileToScfForOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range TileToScfForOp::getDynamicSizes() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange TileToScfForOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange TileToScfForOp::getDynamicSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileToScfForOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range TileToScfForOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> TileToScfForOp::getTiledLinalgOp() {
  return *getODSResults(0).begin();
}

::mlir::Operation::result_range TileToScfForOp::getLoops() {
  return getODSResults(1);
}

::mlir::DenseI64ArrayAttr TileToScfForOp::getStaticSizesAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getStaticSizesAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> TileToScfForOp::getStaticSizes() {
  auto attr = getStaticSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileToScfForOp::getInterchangeAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getInterchangeAttrName()).dyn_cast_or_null<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> TileToScfForOp::getInterchange() {
  auto attr = getInterchangeAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void TileToScfForOp::setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getStaticSizesAttrName(), attr);
}

void TileToScfForOp::setStaticSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getStaticSizesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getStaticSizesAttrName());
}

void TileToScfForOp::setInterchangeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getInterchangeAttrName(), attr);
}

void TileToScfForOp::setInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInterchangeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getInterchangeAttrName());
}

::mlir::Attribute TileToScfForOp::removeStaticSizesAttr() {
  return (*this)->removeAttr(getStaticSizesAttrName());
}

::mlir::Attribute TileToScfForOp::removeInterchangeAttr() {
  return (*this)->removeAttr(getInterchangeAttrName());
}

void TileToScfForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  if (static_sizes) {
    odsState.addAttribute(getStaticSizesAttrName(odsState.name), static_sizes);
  }
  if (interchange) {
    odsState.addAttribute(getInterchangeAttrName(odsState.name), interchange);
  }
  odsState.addTypes(tiled_linalg_op);
  odsState.addTypes(loops);
}

void TileToScfForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  if (static_sizes) {
    odsState.addAttribute(getStaticSizesAttrName(odsState.name), static_sizes);
  }
  if (interchange) {
    odsState.addAttribute(getInterchangeAttrName(odsState.name), interchange);
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileToScfForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes, /*optional*/::llvm::ArrayRef<int64_t> interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  odsState.addAttribute(getStaticSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_sizes));
  odsState.addAttribute(getInterchangeAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(interchange));
  odsState.addTypes(tiled_linalg_op);
  odsState.addTypes(loops);
}

void TileToScfForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes, /*optional*/::llvm::ArrayRef<int64_t> interchange) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  odsState.addAttribute(getStaticSizesAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(static_sizes));
  odsState.addAttribute(getInterchangeAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(interchange));
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileToScfForOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TileToScfForOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_interchange;
  ::mlir::Attribute tblgen_static_sizes;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getInterchangeAttrName()) {
      tblgen_interchange = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getStaticSizesAttrName()) {
      tblgen_static_sizes = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_static_sizes, "static_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_interchange, "interchange")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TileToScfForOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileToScfForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::VectorizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
VectorizeOpGenericAdaptorBase::VectorizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.structured.vectorize", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> VectorizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr VectorizeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr VectorizeOpGenericAdaptorBase::getVectorizePaddingAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, VectorizeOp::getVectorizePaddingAttrName(*odsOpName)).dyn_cast_or_null<::mlir::UnitAttr>();
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeOpGenericAdaptorBase::getVectorizePadding() {
  auto attr = getVectorizePaddingAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOpGenericAdaptorBase::getVectorizeNdExtractAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, VectorizeOp::getVectorizeNdExtractAttrName(*odsOpName)).dyn_cast_or_null<::mlir::UnitAttr>();
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeOpGenericAdaptorBase::getVectorizeNdExtract() {
  auto attr = getVectorizeNdExtractAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOpGenericAdaptorBase::getDisableMultiReductionToContractPatternsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, VectorizeOp::getDisableMultiReductionToContractPatternsAttrName(*odsOpName)).dyn_cast_or_null<::mlir::UnitAttr>();
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeOpGenericAdaptorBase::getDisableMultiReductionToContractPatterns() {
  auto attr = getDisableMultiReductionToContractPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOpGenericAdaptorBase::getDisableTransferPermutationMapLoweringPatternsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, VectorizeOp::getDisableTransferPermutationMapLoweringPatternsAttrName(*odsOpName)).dyn_cast_or_null<::mlir::UnitAttr>();
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeOpGenericAdaptorBase::getDisableTransferPermutationMapLoweringPatterns() {
  auto attr = getDisableTransferPermutationMapLoweringPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
VectorizeOpAdaptor::VectorizeOpAdaptor(VectorizeOp op) : VectorizeOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult VectorizeOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_disable_multi_reduction_to_contract_patterns;
  ::mlir::Attribute tblgen_disable_transfer_permutation_map_lowering_patterns;
  ::mlir::Attribute tblgen_vectorize_nd_extract;
  ::mlir::Attribute tblgen_vectorize_padding;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == VectorizeOp::getDisableMultiReductionToContractPatternsAttrName(*odsOpName)) {
      tblgen_disable_multi_reduction_to_contract_patterns = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == VectorizeOp::getDisableTransferPermutationMapLoweringPatternsAttrName(*odsOpName)) {
      tblgen_disable_transfer_permutation_map_lowering_patterns = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == VectorizeOp::getVectorizeNdExtractAttrName(*odsOpName)) {
      tblgen_vectorize_nd_extract = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == VectorizeOp::getVectorizePaddingAttrName(*odsOpName)) {
      tblgen_vectorize_padding = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_vectorize_padding && !((tblgen_vectorize_padding.isa<::mlir::UnitAttr>())))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'vectorize_padding' failed to satisfy constraint: unit attribute");

  if (tblgen_vectorize_nd_extract && !((tblgen_vectorize_nd_extract.isa<::mlir::UnitAttr>())))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'vectorize_nd_extract' failed to satisfy constraint: unit attribute");

  if (tblgen_disable_multi_reduction_to_contract_patterns && !((tblgen_disable_multi_reduction_to_contract_patterns.isa<::mlir::UnitAttr>())))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'disable_multi_reduction_to_contract_patterns' failed to satisfy constraint: unit attribute");

  if (tblgen_disable_transfer_permutation_map_lowering_patterns && !((tblgen_disable_transfer_permutation_map_lowering_patterns.isa<::mlir::UnitAttr>())))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'disable_transfer_permutation_map_lowering_patterns' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> VectorizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range VectorizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> VectorizeOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange VectorizeOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> VectorizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range VectorizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> VectorizeOp::getTransformed() {
  return *getODSResults(0).begin();
}

::mlir::UnitAttr VectorizeOp::getVectorizePaddingAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getVectorizePaddingAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool VectorizeOp::getVectorizePadding() {
  auto attr = getVectorizePaddingAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOp::getVectorizeNdExtractAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getVectorizeNdExtractAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool VectorizeOp::getVectorizeNdExtract() {
  auto attr = getVectorizeNdExtractAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOp::getDisableMultiReductionToContractPatternsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getDisableMultiReductionToContractPatternsAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool VectorizeOp::getDisableMultiReductionToContractPatterns() {
  auto attr = getDisableMultiReductionToContractPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeOp::getDisableTransferPermutationMapLoweringPatternsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getDisableTransferPermutationMapLoweringPatternsAttrName()).dyn_cast_or_null<::mlir::UnitAttr>();
}

bool VectorizeOp::getDisableTransferPermutationMapLoweringPatterns() {
  auto attr = getDisableTransferPermutationMapLoweringPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void VectorizeOp::setVectorizePaddingAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getVectorizePaddingAttrName(), attr);
}

void VectorizeOp::setVectorizePadding(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getVectorizePaddingAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getVectorizePaddingAttrName());
}

void VectorizeOp::setVectorizeNdExtractAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getVectorizeNdExtractAttrName(), attr);
}

void VectorizeOp::setVectorizeNdExtract(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getVectorizeNdExtractAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getVectorizeNdExtractAttrName());
}

void VectorizeOp::setDisableMultiReductionToContractPatternsAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getDisableMultiReductionToContractPatternsAttrName(), attr);
}

void VectorizeOp::setDisableMultiReductionToContractPatterns(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getDisableMultiReductionToContractPatternsAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getDisableMultiReductionToContractPatternsAttrName());
}

void VectorizeOp::setDisableTransferPermutationMapLoweringPatternsAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getDisableTransferPermutationMapLoweringPatternsAttrName(), attr);
}

void VectorizeOp::setDisableTransferPermutationMapLoweringPatterns(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getDisableTransferPermutationMapLoweringPatternsAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getDisableTransferPermutationMapLoweringPatternsAttrName());
}

::mlir::Attribute VectorizeOp::removeVectorizePaddingAttr() {
  return (*this)->removeAttr(getVectorizePaddingAttrName());
}

::mlir::Attribute VectorizeOp::removeVectorizeNdExtractAttr() {
  return (*this)->removeAttr(getVectorizeNdExtractAttrName());
}

::mlir::Attribute VectorizeOp::removeDisableMultiReductionToContractPatternsAttr() {
  return (*this)->removeAttr(getDisableMultiReductionToContractPatternsAttrName());
}

::mlir::Attribute VectorizeOp::removeDisableTransferPermutationMapLoweringPatternsAttr() {
  return (*this)->removeAttr(getDisableTransferPermutationMapLoweringPatternsAttrName());
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.addAttribute(getVectorizePaddingAttrName(odsState.name), vectorize_padding);
  }
  if (vectorize_nd_extract) {
    odsState.addAttribute(getVectorizeNdExtractAttrName(odsState.name), vectorize_nd_extract);
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.addAttribute(getDisableMultiReductionToContractPatternsAttrName(odsState.name), disable_multi_reduction_to_contract_patterns);
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.addAttribute(getDisableTransferPermutationMapLoweringPatternsAttrName(odsState.name), disable_transfer_permutation_map_lowering_patterns);
  }
  odsState.addTypes(transformed);
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.addAttribute(getVectorizePaddingAttrName(odsState.name), vectorize_padding);
  }
  if (vectorize_nd_extract) {
    odsState.addAttribute(getVectorizeNdExtractAttrName(odsState.name), vectorize_nd_extract);
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.addAttribute(getDisableMultiReductionToContractPatternsAttrName(odsState.name), disable_multi_reduction_to_contract_patterns);
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.addAttribute(getDisableTransferPermutationMapLoweringPatternsAttrName(odsState.name), disable_transfer_permutation_map_lowering_patterns);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/bool vectorize_padding, /*optional*/bool vectorize_nd_extract, /*optional*/bool disable_multi_reduction_to_contract_patterns, /*optional*/bool disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.addAttribute(getVectorizePaddingAttrName(odsState.name), ((vectorize_padding) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (vectorize_nd_extract) {
    odsState.addAttribute(getVectorizeNdExtractAttrName(odsState.name), ((vectorize_nd_extract) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.addAttribute(getDisableMultiReductionToContractPatternsAttrName(odsState.name), ((disable_multi_reduction_to_contract_patterns) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.addAttribute(getDisableTransferPermutationMapLoweringPatternsAttrName(odsState.name), ((disable_transfer_permutation_map_lowering_patterns) ? odsBuilder.getUnitAttr() : nullptr));
  }
  odsState.addTypes(transformed);
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/bool vectorize_padding, /*optional*/bool vectorize_nd_extract, /*optional*/bool disable_multi_reduction_to_contract_patterns, /*optional*/bool disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.addAttribute(getVectorizePaddingAttrName(odsState.name), ((vectorize_padding) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (vectorize_nd_extract) {
    odsState.addAttribute(getVectorizeNdExtractAttrName(odsState.name), ((vectorize_nd_extract) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.addAttribute(getDisableMultiReductionToContractPatternsAttrName(odsState.name), ((disable_multi_reduction_to_contract_patterns) ? odsBuilder.getUnitAttr() : nullptr));
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.addAttribute(getDisableTransferPermutationMapLoweringPatternsAttrName(odsState.name), ((disable_transfer_permutation_map_lowering_patterns) ? odsBuilder.getUnitAttr() : nullptr));
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VectorizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult VectorizeOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_disable_multi_reduction_to_contract_patterns;
  ::mlir::Attribute tblgen_disable_transfer_permutation_map_lowering_patterns;
  ::mlir::Attribute tblgen_vectorize_nd_extract;
  ::mlir::Attribute tblgen_vectorize_padding;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getDisableMultiReductionToContractPatternsAttrName()) {
      tblgen_disable_multi_reduction_to_contract_patterns = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getDisableTransferPermutationMapLoweringPatternsAttrName()) {
      tblgen_disable_transfer_permutation_map_lowering_patterns = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getVectorizeNdExtractAttrName()) {
      tblgen_vectorize_nd_extract = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getVectorizePaddingAttrName()) {
      tblgen_vectorize_padding = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_vectorize_padding, "vectorize_padding")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_vectorize_nd_extract, "vectorize_nd_extract")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_disable_multi_reduction_to_contract_patterns, "disable_multi_reduction_to_contract_patterns")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_disable_transfer_permutation_map_lowering_patterns, "disable_transfer_permutation_map_lowering_patterns")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult VectorizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult VectorizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void VectorizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getVectorizePaddingAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("vectorize_padding");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getVectorizeNdExtractAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("vectorize_nd_extract");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDisableMultiReductionToContractPatternsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("disable_multi_reduction_to_contract_patterns");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDisableTransferPermutationMapLoweringPatternsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("disable_transfer_permutation_map_lowering_patterns");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::VectorizeOp)


#endif  // GET_OP_CLASSES

