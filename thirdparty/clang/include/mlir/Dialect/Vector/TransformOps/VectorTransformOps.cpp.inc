/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::LowerVectorsOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_VectorTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isa<::mlir::pdl::OperationType>()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be PDL handle to an `mlir::Operation *`, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::vector::VectorContractLoweringAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: control the lowering of `vector.contract` operations.";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::vector::VectorMultiReductionLoweringAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: control the lowering of `vector.multi_reduction`.";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::vector::VectorTransferSplitAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: control the splitting of `vector.transfer` operations into in-bounds and out-of-bounds variants.";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::vector::VectorTransposeLoweringAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: control the lowering of `vector.transpose` operations.";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::BoolAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: bool attribute";
  }
  return ::mlir::success();
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LowerVectorsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LowerVectorsOpGenericAdaptorBase::LowerVectorsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.vector.lower_vectors", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> LowerVectorsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr LowerVectorsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::vector::VectorContractLoweringAttr LowerVectorsOpGenericAdaptorBase::getContractionLoweringAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, LowerVectorsOp::getContractionLoweringAttrName(*odsOpName)).dyn_cast_or_null<::mlir::vector::VectorContractLoweringAttr>();
  return attr;
}

::mlir::vector::VectorContractLowering LowerVectorsOpGenericAdaptorBase::getContractionLowering() {
  auto attr = getContractionLoweringAttr();
  return attr.getValue();
}

::mlir::vector::VectorMultiReductionLoweringAttr LowerVectorsOpGenericAdaptorBase::getMultireductionLoweringAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, LowerVectorsOp::getMultireductionLoweringAttrName(*odsOpName)).dyn_cast_or_null<::mlir::vector::VectorMultiReductionLoweringAttr>();
  return attr;
}

::mlir::vector::VectorMultiReductionLowering LowerVectorsOpGenericAdaptorBase::getMultireductionLowering() {
  auto attr = getMultireductionLoweringAttr();
  return attr.getValue();
}

::mlir::vector::VectorTransferSplitAttr LowerVectorsOpGenericAdaptorBase::getSplitTransfersAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, LowerVectorsOp::getSplitTransfersAttrName(*odsOpName)).dyn_cast_or_null<::mlir::vector::VectorTransferSplitAttr>();
  return attr;
}

::mlir::vector::VectorTransferSplit LowerVectorsOpGenericAdaptorBase::getSplitTransfers() {
  auto attr = getSplitTransfersAttr();
  return attr.getValue();
}

::mlir::vector::VectorTransposeLoweringAttr LowerVectorsOpGenericAdaptorBase::getTransposeLoweringAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, LowerVectorsOp::getTransposeLoweringAttrName(*odsOpName)).dyn_cast_or_null<::mlir::vector::VectorTransposeLoweringAttr>();
  return attr;
}

::mlir::vector::VectorTransposeLowering LowerVectorsOpGenericAdaptorBase::getTransposeLowering() {
  auto attr = getTransposeLoweringAttr();
  return attr.getValue();
}

::mlir::BoolAttr LowerVectorsOpGenericAdaptorBase::getTransposeAvx2LoweringAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, LowerVectorsOp::getTransposeAvx2LoweringAttrName(*odsOpName)).dyn_cast_or_null<::mlir::BoolAttr>();
  return attr;
}

bool LowerVectorsOpGenericAdaptorBase::getTransposeAvx2Lowering() {
  auto attr = getTransposeAvx2LoweringAttr();
  return attr.getValue();
}

::mlir::BoolAttr LowerVectorsOpGenericAdaptorBase::getUnrollVectorTransfersAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, LowerVectorsOp::getUnrollVectorTransfersAttrName(*odsOpName)).dyn_cast_or_null<::mlir::BoolAttr>();
  return attr;
}

bool LowerVectorsOpGenericAdaptorBase::getUnrollVectorTransfers() {
  auto attr = getUnrollVectorTransfersAttr();
  return attr.getValue();
}

} // namespace detail
LowerVectorsOpAdaptor::LowerVectorsOpAdaptor(LowerVectorsOp op) : LowerVectorsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult LowerVectorsOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_contraction_lowering;
  ::mlir::Attribute tblgen_multireduction_lowering;
  ::mlir::Attribute tblgen_split_transfers;
  ::mlir::Attribute tblgen_transpose_avx2_lowering;
  ::mlir::Attribute tblgen_transpose_lowering;
  ::mlir::Attribute tblgen_unroll_vector_transfers;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == LowerVectorsOp::getContractionLoweringAttrName(*odsOpName)) {
      tblgen_contraction_lowering = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == LowerVectorsOp::getMultireductionLoweringAttrName(*odsOpName)) {
      tblgen_multireduction_lowering = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == LowerVectorsOp::getSplitTransfersAttrName(*odsOpName)) {
      tblgen_split_transfers = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == LowerVectorsOp::getTransposeAvx2LoweringAttrName(*odsOpName)) {
      tblgen_transpose_avx2_lowering = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == LowerVectorsOp::getTransposeLoweringAttrName(*odsOpName)) {
      tblgen_transpose_lowering = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == LowerVectorsOp::getUnrollVectorTransfersAttrName(*odsOpName)) {
      tblgen_unroll_vector_transfers = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_contraction_lowering && !((tblgen_contraction_lowering.isa<::mlir::vector::VectorContractLoweringAttr>())))
    return emitError(loc, "'transform.vector.lower_vectors' op ""attribute 'contraction_lowering' failed to satisfy constraint: control the lowering of `vector.contract` operations.");

  if (tblgen_multireduction_lowering && !((tblgen_multireduction_lowering.isa<::mlir::vector::VectorMultiReductionLoweringAttr>())))
    return emitError(loc, "'transform.vector.lower_vectors' op ""attribute 'multireduction_lowering' failed to satisfy constraint: control the lowering of `vector.multi_reduction`.");

  if (tblgen_split_transfers && !((tblgen_split_transfers.isa<::mlir::vector::VectorTransferSplitAttr>())))
    return emitError(loc, "'transform.vector.lower_vectors' op ""attribute 'split_transfers' failed to satisfy constraint: control the splitting of `vector.transfer` operations into in-bounds and out-of-bounds variants.");

  if (tblgen_transpose_lowering && !((tblgen_transpose_lowering.isa<::mlir::vector::VectorTransposeLoweringAttr>())))
    return emitError(loc, "'transform.vector.lower_vectors' op ""attribute 'transpose_lowering' failed to satisfy constraint: control the lowering of `vector.transpose` operations.");

  if (tblgen_transpose_avx2_lowering && !((tblgen_transpose_avx2_lowering.isa<::mlir::BoolAttr>())))
    return emitError(loc, "'transform.vector.lower_vectors' op ""attribute 'transpose_avx2_lowering' failed to satisfy constraint: bool attribute");

  if (tblgen_unroll_vector_transfers && !((tblgen_unroll_vector_transfers.isa<::mlir::BoolAttr>())))
    return emitError(loc, "'transform.vector.lower_vectors' op ""attribute 'unroll_vector_transfers' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> LowerVectorsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range LowerVectorsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> LowerVectorsOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange LowerVectorsOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> LowerVectorsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range LowerVectorsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> LowerVectorsOp::getResults() {
  return *getODSResults(0).begin();
}

::mlir::vector::VectorContractLoweringAttr LowerVectorsOp::getContractionLoweringAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getContractionLoweringAttrName()).dyn_cast_or_null<::mlir::vector::VectorContractLoweringAttr>();
}

::mlir::vector::VectorContractLowering LowerVectorsOp::getContractionLowering() {
  auto attr = getContractionLoweringAttr();
  return attr.getValue();
}

::mlir::vector::VectorMultiReductionLoweringAttr LowerVectorsOp::getMultireductionLoweringAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getMultireductionLoweringAttrName()).dyn_cast_or_null<::mlir::vector::VectorMultiReductionLoweringAttr>();
}

::mlir::vector::VectorMultiReductionLowering LowerVectorsOp::getMultireductionLowering() {
  auto attr = getMultireductionLoweringAttr();
  return attr.getValue();
}

::mlir::vector::VectorTransferSplitAttr LowerVectorsOp::getSplitTransfersAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getSplitTransfersAttrName()).dyn_cast_or_null<::mlir::vector::VectorTransferSplitAttr>();
}

::mlir::vector::VectorTransferSplit LowerVectorsOp::getSplitTransfers() {
  auto attr = getSplitTransfersAttr();
  return attr.getValue();
}

::mlir::vector::VectorTransposeLoweringAttr LowerVectorsOp::getTransposeLoweringAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getTransposeLoweringAttrName()).dyn_cast_or_null<::mlir::vector::VectorTransposeLoweringAttr>();
}

::mlir::vector::VectorTransposeLowering LowerVectorsOp::getTransposeLowering() {
  auto attr = getTransposeLoweringAttr();
  return attr.getValue();
}

::mlir::BoolAttr LowerVectorsOp::getTransposeAvx2LoweringAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getTransposeAvx2LoweringAttrName()).dyn_cast_or_null<::mlir::BoolAttr>();
}

bool LowerVectorsOp::getTransposeAvx2Lowering() {
  auto attr = getTransposeAvx2LoweringAttr();
  return attr.getValue();
}

::mlir::BoolAttr LowerVectorsOp::getUnrollVectorTransfersAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getUnrollVectorTransfersAttrName()).dyn_cast_or_null<::mlir::BoolAttr>();
}

bool LowerVectorsOp::getUnrollVectorTransfers() {
  auto attr = getUnrollVectorTransfersAttr();
  return attr.getValue();
}

void LowerVectorsOp::setContractionLoweringAttr(::mlir::vector::VectorContractLoweringAttr attr) {
  (*this)->setAttr(getContractionLoweringAttrName(), attr);
}

void LowerVectorsOp::setContractionLowering(::mlir::vector::VectorContractLowering attrValue) {
  (*this)->setAttr(getContractionLoweringAttrName(), ::mlir::vector::VectorContractLoweringAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void LowerVectorsOp::setMultireductionLoweringAttr(::mlir::vector::VectorMultiReductionLoweringAttr attr) {
  (*this)->setAttr(getMultireductionLoweringAttrName(), attr);
}

void LowerVectorsOp::setMultireductionLowering(::mlir::vector::VectorMultiReductionLowering attrValue) {
  (*this)->setAttr(getMultireductionLoweringAttrName(), ::mlir::vector::VectorMultiReductionLoweringAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void LowerVectorsOp::setSplitTransfersAttr(::mlir::vector::VectorTransferSplitAttr attr) {
  (*this)->setAttr(getSplitTransfersAttrName(), attr);
}

void LowerVectorsOp::setSplitTransfers(::mlir::vector::VectorTransferSplit attrValue) {
  (*this)->setAttr(getSplitTransfersAttrName(), ::mlir::vector::VectorTransferSplitAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void LowerVectorsOp::setTransposeLoweringAttr(::mlir::vector::VectorTransposeLoweringAttr attr) {
  (*this)->setAttr(getTransposeLoweringAttrName(), attr);
}

void LowerVectorsOp::setTransposeLowering(::mlir::vector::VectorTransposeLowering attrValue) {
  (*this)->setAttr(getTransposeLoweringAttrName(), ::mlir::vector::VectorTransposeLoweringAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void LowerVectorsOp::setTransposeAvx2LoweringAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getTransposeAvx2LoweringAttrName(), attr);
}

void LowerVectorsOp::setTransposeAvx2Lowering(bool attrValue) {
  (*this)->setAttr(getTransposeAvx2LoweringAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void LowerVectorsOp::setUnrollVectorTransfersAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getUnrollVectorTransfersAttrName(), attr);
}

void LowerVectorsOp::setUnrollVectorTransfers(bool attrValue) {
  (*this)->setAttr(getUnrollVectorTransfersAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void LowerVectorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type resultType, Value target, const vector::LowerVectorsOptions &options) {
        return build(odsBuilder, odsState, resultType, target,
          options.vectorContractLowering,
          options.vectorMultiReductionLowering, options.vectorTransferSplit,
          options.vectorTransposeLowering, options.transposeAVX2Lowering,
          options.unrollVectorTransfers);
      
}

void LowerVectorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value target, ::mlir::vector::VectorContractLoweringAttr contraction_lowering, ::mlir::vector::VectorMultiReductionLoweringAttr multireduction_lowering, ::mlir::vector::VectorTransferSplitAttr split_transfers, ::mlir::vector::VectorTransposeLoweringAttr transpose_lowering, ::mlir::BoolAttr transpose_avx2_lowering, ::mlir::BoolAttr unroll_vector_transfers) {
  odsState.addOperands(target);
  if (contraction_lowering) {
    odsState.addAttribute(getContractionLoweringAttrName(odsState.name), contraction_lowering);
  }
  if (multireduction_lowering) {
    odsState.addAttribute(getMultireductionLoweringAttrName(odsState.name), multireduction_lowering);
  }
  if (split_transfers) {
    odsState.addAttribute(getSplitTransfersAttrName(odsState.name), split_transfers);
  }
  if (transpose_lowering) {
    odsState.addAttribute(getTransposeLoweringAttrName(odsState.name), transpose_lowering);
  }
  if (transpose_avx2_lowering) {
    odsState.addAttribute(getTransposeAvx2LoweringAttrName(odsState.name), transpose_avx2_lowering);
  }
  if (unroll_vector_transfers) {
    odsState.addAttribute(getUnrollVectorTransfersAttrName(odsState.name), unroll_vector_transfers);
  }
  odsState.addTypes(results);
}

void LowerVectorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::vector::VectorContractLoweringAttr contraction_lowering, ::mlir::vector::VectorMultiReductionLoweringAttr multireduction_lowering, ::mlir::vector::VectorTransferSplitAttr split_transfers, ::mlir::vector::VectorTransposeLoweringAttr transpose_lowering, ::mlir::BoolAttr transpose_avx2_lowering, ::mlir::BoolAttr unroll_vector_transfers) {
  odsState.addOperands(target);
  if (contraction_lowering) {
    odsState.addAttribute(getContractionLoweringAttrName(odsState.name), contraction_lowering);
  }
  if (multireduction_lowering) {
    odsState.addAttribute(getMultireductionLoweringAttrName(odsState.name), multireduction_lowering);
  }
  if (split_transfers) {
    odsState.addAttribute(getSplitTransfersAttrName(odsState.name), split_transfers);
  }
  if (transpose_lowering) {
    odsState.addAttribute(getTransposeLoweringAttrName(odsState.name), transpose_lowering);
  }
  if (transpose_avx2_lowering) {
    odsState.addAttribute(getTransposeAvx2LoweringAttrName(odsState.name), transpose_avx2_lowering);
  }
  if (unroll_vector_transfers) {
    odsState.addAttribute(getUnrollVectorTransfersAttrName(odsState.name), unroll_vector_transfers);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LowerVectorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value target, ::mlir::vector::VectorContractLowering contraction_lowering, ::mlir::vector::VectorMultiReductionLowering multireduction_lowering, ::mlir::vector::VectorTransferSplit split_transfers, ::mlir::vector::VectorTransposeLowering transpose_lowering, bool transpose_avx2_lowering, bool unroll_vector_transfers) {
  odsState.addOperands(target);
  odsState.addAttribute(getContractionLoweringAttrName(odsState.name), ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), contraction_lowering));
  odsState.addAttribute(getMultireductionLoweringAttrName(odsState.name), ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), multireduction_lowering));
  odsState.addAttribute(getSplitTransfersAttrName(odsState.name), ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), split_transfers));
  odsState.addAttribute(getTransposeLoweringAttrName(odsState.name), ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), transpose_lowering));
  odsState.addAttribute(getTransposeAvx2LoweringAttrName(odsState.name), odsBuilder.getBoolAttr(transpose_avx2_lowering));
  odsState.addAttribute(getUnrollVectorTransfersAttrName(odsState.name), odsBuilder.getBoolAttr(unroll_vector_transfers));
  odsState.addTypes(results);
}

void LowerVectorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::vector::VectorContractLowering contraction_lowering, ::mlir::vector::VectorMultiReductionLowering multireduction_lowering, ::mlir::vector::VectorTransferSplit split_transfers, ::mlir::vector::VectorTransposeLowering transpose_lowering, bool transpose_avx2_lowering, bool unroll_vector_transfers) {
  odsState.addOperands(target);
  odsState.addAttribute(getContractionLoweringAttrName(odsState.name), ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), contraction_lowering));
  odsState.addAttribute(getMultireductionLoweringAttrName(odsState.name), ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), multireduction_lowering));
  odsState.addAttribute(getSplitTransfersAttrName(odsState.name), ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), split_transfers));
  odsState.addAttribute(getTransposeLoweringAttrName(odsState.name), ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), transpose_lowering));
  odsState.addAttribute(getTransposeAvx2LoweringAttrName(odsState.name), odsBuilder.getBoolAttr(transpose_avx2_lowering));
  odsState.addAttribute(getUnrollVectorTransfersAttrName(odsState.name), odsBuilder.getBoolAttr(unroll_vector_transfers));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LowerVectorsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LowerVectorsOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), vector::VectorContractLowering::OuterProduct));
  }
  if (!attributes.get(attrNames[1])) {
    attributes.append(attrNames[1], ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), vector::VectorMultiReductionLowering::InnerParallel));
  }
  if (!attributes.get(attrNames[2])) {
    attributes.append(attrNames[2], ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), vector::VectorTransferSplit::LinalgCopy));
  }
  if (!attributes.get(attrNames[4])) {
    attributes.append(attrNames[4], ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), vector::VectorTransposeLowering::EltWise));
  }
  if (!attributes.get(attrNames[3])) {
    attributes.append(attrNames[3], odsBuilder.getBoolAttr(false));
  }
  if (!attributes.get(attrNames[5])) {
    attributes.append(attrNames[5], odsBuilder.getBoolAttr(true));
  }
}

::mlir::LogicalResult LowerVectorsOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_contraction_lowering;
  ::mlir::Attribute tblgen_multireduction_lowering;
  ::mlir::Attribute tblgen_split_transfers;
  ::mlir::Attribute tblgen_transpose_avx2_lowering;
  ::mlir::Attribute tblgen_transpose_lowering;
  ::mlir::Attribute tblgen_unroll_vector_transfers;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getContractionLoweringAttrName()) {
      tblgen_contraction_lowering = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getMultireductionLoweringAttrName()) {
      tblgen_multireduction_lowering = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getSplitTransfersAttrName()) {
      tblgen_split_transfers = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getTransposeAvx2LoweringAttrName()) {
      tblgen_transpose_avx2_lowering = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getTransposeLoweringAttrName()) {
      tblgen_transpose_lowering = namedAttrIt->getValue();
    }
    else if (namedAttrIt->getName() == getUnrollVectorTransfersAttrName()) {
      tblgen_unroll_vector_transfers = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps0(*this, tblgen_contraction_lowering, "contraction_lowering")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps1(*this, tblgen_multireduction_lowering, "multireduction_lowering")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps2(*this, tblgen_split_transfers, "split_transfers")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps3(*this, tblgen_transpose_lowering, "transpose_lowering")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(*this, tblgen_transpose_avx2_lowering, "transpose_avx2_lowering")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(*this, tblgen_unroll_vector_transfers, "unroll_vector_transfers")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_VectorTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LowerVectorsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LowerVectorsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::vector::VectorContractLoweringAttr contraction_loweringAttr;
  ::mlir::vector::VectorMultiReductionLoweringAttr multireduction_loweringAttr;
  ::mlir::vector::VectorTransferSplitAttr split_transfersAttr;
  ::mlir::vector::VectorTransposeLoweringAttr transpose_loweringAttr;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  bool contraction_loweringClause = false;
  bool multireduction_loweringClause = false;
  bool split_transfersClause = false;
  bool transpose_loweringClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("contraction_lowering"))) {

  if (contraction_loweringClause) {
    return parser.emitError(parser.getNameLoc())
          << "`contraction_lowering` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  contraction_loweringClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"dot","matmulintrinsics","outerproduct","parallelarith"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "contraction_lowering", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'contraction_lowering' [dot, matmulintrinsics, outerproduct, parallelarith]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorContractLowering(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "contraction_lowering attribute specification: \"" << attrStr << '"';;

      contraction_loweringAttr = ::mlir::vector::VectorContractLoweringAttr::get(parser.getBuilder().getContext(), *attrOptional);
      result.addAttribute("contraction_lowering", contraction_loweringAttr);
    }
  }
    } else if (succeeded(parser.parseOptionalKeyword("multireduction_lowering"))) {

  if (multireduction_loweringClause) {
    return parser.emitError(parser.getNameLoc())
          << "`multireduction_lowering` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  multireduction_loweringClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"innerparallel","innerreduction"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "multireduction_lowering", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'multireduction_lowering' [innerparallel, innerreduction]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorMultiReductionLowering(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "multireduction_lowering attribute specification: \"" << attrStr << '"';;

      multireduction_loweringAttr = ::mlir::vector::VectorMultiReductionLoweringAttr::get(parser.getBuilder().getContext(), *attrOptional);
      result.addAttribute("multireduction_lowering", multireduction_loweringAttr);
    }
  }
    } else if (succeeded(parser.parseOptionalKeyword("split_transfers"))) {

  if (split_transfersClause) {
    return parser.emitError(parser.getNameLoc())
          << "`split_transfers` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  split_transfersClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"none"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "split_transfers", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'split_transfers' [none, vector-transfer, linalg-copy, force-in-bounds]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorTransferSplit(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "split_transfers attribute specification: \"" << attrStr << '"';;

      split_transfersAttr = ::mlir::vector::VectorTransferSplitAttr::get(parser.getBuilder().getContext(), *attrOptional);
      result.addAttribute("split_transfers", split_transfersAttr);
    }
  }
    } else if (succeeded(parser.parseOptionalKeyword("transpose_lowering"))) {

  if (transpose_loweringClause) {
    return parser.emitError(parser.getNameLoc())
          << "`transpose_lowering` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  transpose_loweringClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"eltwise","flat_transpose","shuffle"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "transpose_lowering", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'transpose_lowering' [eltwise, flat_transpose, shuffle]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorTransposeLowering(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "transpose_lowering attribute specification: \"" << attrStr << '"';;

      transpose_loweringAttr = ::mlir::vector::VectorTransposeLoweringAttr::get(parser.getBuilder().getContext(), *attrOptional);
      result.addAttribute("transpose_lowering", transpose_loweringAttr);
    }
  }
    } else  {
    break;
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

void LowerVectorsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << " ";
  if (false || getContractionLoweringAttr()) {
  _odsPrinter << ' ' << "contraction_lowering";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';

  {
    auto caseValue = getContractionLowering();
    auto caseValueStr = stringifyVectorContractLowering(caseValue);
    _odsPrinter << caseValueStr;
  }
  }
  if (false || getMultireductionLoweringAttr()) {
  _odsPrinter << ' ' << "multireduction_lowering";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';

  {
    auto caseValue = getMultireductionLowering();
    auto caseValueStr = stringifyVectorMultiReductionLowering(caseValue);
    _odsPrinter << caseValueStr;
  }
  }
  if (false || getSplitTransfersAttr()) {
  _odsPrinter << ' ' << "split_transfers";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';

  {
    auto caseValue = getSplitTransfers();
    auto caseValueStr = stringifyVectorTransferSplit(caseValue);
    switch (caseValue) {
    case ::mlir::vector::VectorTransferSplit::None:
      _odsPrinter << caseValueStr;
      break;
    default:
      _odsPrinter << '"' << caseValueStr << '"';
      break;
    }
  }
  }
  if (false || getTransposeLoweringAttr()) {
  _odsPrinter << ' ' << "transpose_lowering";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';

  {
    auto caseValue = getTransposeLowering();
    auto caseValueStr = stringifyVectorTransposeLowering(caseValue);
    _odsPrinter << caseValueStr;
  }
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("contraction_lowering");
  elidedAttrs.push_back("multireduction_lowering");
  elidedAttrs.push_back("split_transfers");
  elidedAttrs.push_back("transpose_lowering");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getContractionLoweringAttr();
     if(attr && (attr == ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), vector::VectorContractLowering::OuterProduct)))
       elidedAttrs.push_back("contraction_lowering");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMultireductionLoweringAttr();
     if(attr && (attr == ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), vector::VectorMultiReductionLowering::InnerParallel)))
       elidedAttrs.push_back("multireduction_lowering");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSplitTransfersAttr();
     if(attr && (attr == ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), vector::VectorTransferSplit::LinalgCopy)))
       elidedAttrs.push_back("split_transfers");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTransposeLoweringAttr();
     if(attr && (attr == ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), vector::VectorTransposeLowering::EltWise)))
       elidedAttrs.push_back("transpose_lowering");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTransposeAvx2LoweringAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("transpose_avx2_lowering");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUnrollVectorTransfersAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("unroll_vector_transfers");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LowerVectorsOp)


#endif  // GET_OP_CLASSES

