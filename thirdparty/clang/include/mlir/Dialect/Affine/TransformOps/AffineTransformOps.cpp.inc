/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::SimplifyBoundedAffineOpsOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_AffineTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isa<::mlir::pdl::OperationType>()))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be PDL handle to an `mlir::Operation *`, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_AffineTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !((attr.isa<::mlir::DenseI64ArrayAttr>()))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  }
  return ::mlir::success();
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SimplifyBoundedAffineOpsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SimplifyBoundedAffineOpsOpGenericAdaptorBase::SimplifyBoundedAffineOpsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("transform.affine.simplify_bounded_affine_ops", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> SimplifyBoundedAffineOpsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr SimplifyBoundedAffineOpsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::DenseI64ArrayAttr SimplifyBoundedAffineOpsOpGenericAdaptorBase::getLowerBoundsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 1, SimplifyBoundedAffineOpsOp::getLowerBoundsAttrName(*odsOpName)).cast<::mlir::DenseI64ArrayAttr>();
  return attr;
}

::llvm::ArrayRef<int64_t> SimplifyBoundedAffineOpsOpGenericAdaptorBase::getLowerBounds() {
  auto attr = getLowerBoundsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr SimplifyBoundedAffineOpsOpGenericAdaptorBase::getUpperBoundsAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 1, odsAttrs.end() - 0, SimplifyBoundedAffineOpsOp::getUpperBoundsAttrName(*odsOpName)).cast<::mlir::DenseI64ArrayAttr>();
  return attr;
}

::llvm::ArrayRef<int64_t> SimplifyBoundedAffineOpsOpGenericAdaptorBase::getUpperBounds() {
  auto attr = getUpperBoundsAttr();
  return attr;
}

} // namespace detail
SimplifyBoundedAffineOpsOpAdaptor::SimplifyBoundedAffineOpsOpAdaptor(SimplifyBoundedAffineOpsOp op) : SimplifyBoundedAffineOpsOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult SimplifyBoundedAffineOpsOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_lower_bounds;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'transform.affine.simplify_bounded_affine_ops' op ""requires attribute 'lower_bounds'");
    if (namedAttrIt->getName() == SimplifyBoundedAffineOpsOp::getLowerBoundsAttrName(*odsOpName)) {
      tblgen_lower_bounds = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_upper_bounds;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitError(loc, "'transform.affine.simplify_bounded_affine_ops' op ""requires attribute 'upper_bounds'");
    if (namedAttrIt->getName() == SimplifyBoundedAffineOpsOp::getUpperBoundsAttrName(*odsOpName)) {
      tblgen_upper_bounds = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (tblgen_lower_bounds && !((tblgen_lower_bounds.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.affine.simplify_bounded_affine_ops' op ""attribute 'lower_bounds' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_upper_bounds && !((tblgen_upper_bounds.isa<::mlir::DenseI64ArrayAttr>())))
    return emitError(loc, "'transform.affine.simplify_bounded_affine_ops' op ""attribute 'upper_bounds' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SimplifyBoundedAffineOpsOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range SimplifyBoundedAffineOpsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::pdl::OperationType> SimplifyBoundedAffineOpsOp::getTarget() {
  return *getODSOperands(0).begin();
}

::mlir::Operation::operand_range SimplifyBoundedAffineOpsOp::getBoundedValues() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange SimplifyBoundedAffineOpsOp::getTargetMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange SimplifyBoundedAffineOpsOp::getBoundedValuesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SimplifyBoundedAffineOpsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SimplifyBoundedAffineOpsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::DenseI64ArrayAttr SimplifyBoundedAffineOpsOp::getLowerBoundsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 1, getLowerBoundsAttrName()).cast<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> SimplifyBoundedAffineOpsOp::getLowerBounds() {
  auto attr = getLowerBoundsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr SimplifyBoundedAffineOpsOp::getUpperBoundsAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 1, (*this)->getAttrs().end() - 0, getUpperBoundsAttrName()).cast<::mlir::DenseI64ArrayAttr>();
}

::llvm::ArrayRef<int64_t> SimplifyBoundedAffineOpsOp::getUpperBounds() {
  auto attr = getUpperBoundsAttr();
  return attr;
}

void SimplifyBoundedAffineOpsOp::setLowerBoundsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getLowerBoundsAttrName(), attr);
}

void SimplifyBoundedAffineOpsOp::setLowerBounds(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getLowerBoundsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void SimplifyBoundedAffineOpsOp::setUpperBoundsAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getUpperBoundsAttrName(), attr);
}

void SimplifyBoundedAffineOpsOp::setUpperBounds(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getUpperBoundsAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void SimplifyBoundedAffineOpsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::mlir::DenseI64ArrayAttr lower_bounds, ::mlir::DenseI64ArrayAttr upper_bounds) {
  odsState.addOperands(target);
  odsState.addOperands(bounded_values);
  odsState.addAttribute(getLowerBoundsAttrName(odsState.name), lower_bounds);
  odsState.addAttribute(getUpperBoundsAttrName(odsState.name), upper_bounds);
}

void SimplifyBoundedAffineOpsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::mlir::DenseI64ArrayAttr lower_bounds, ::mlir::DenseI64ArrayAttr upper_bounds) {
  odsState.addOperands(target);
  odsState.addOperands(bounded_values);
  odsState.addAttribute(getLowerBoundsAttrName(odsState.name), lower_bounds);
  odsState.addAttribute(getUpperBoundsAttrName(odsState.name), upper_bounds);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SimplifyBoundedAffineOpsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::llvm::ArrayRef<int64_t> lower_bounds, ::llvm::ArrayRef<int64_t> upper_bounds) {
  odsState.addOperands(target);
  odsState.addOperands(bounded_values);
  odsState.addAttribute(getLowerBoundsAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(lower_bounds));
  odsState.addAttribute(getUpperBoundsAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(upper_bounds));
}

void SimplifyBoundedAffineOpsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::llvm::ArrayRef<int64_t> lower_bounds, ::llvm::ArrayRef<int64_t> upper_bounds) {
  odsState.addOperands(target);
  odsState.addOperands(bounded_values);
  odsState.addAttribute(getLowerBoundsAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(lower_bounds));
  odsState.addAttribute(getUpperBoundsAttrName(odsState.name), odsBuilder.getDenseI64ArrayAttr(upper_bounds));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SimplifyBoundedAffineOpsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SimplifyBoundedAffineOpsOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_lower_bounds;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'lower_bounds'");
    if (namedAttrIt->getName() == getLowerBoundsAttrName()) {
      tblgen_lower_bounds = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }
  ::mlir::Attribute tblgen_upper_bounds;
  while (true) {
    if (namedAttrIt == namedAttrRange.end())
      return emitOpError("requires attribute 'upper_bounds'");
    if (namedAttrIt->getName() == getUpperBoundsAttrName()) {
      tblgen_upper_bounds = namedAttrIt->getValue();
      break;
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AffineTransformOps0(*this, tblgen_lower_bounds, "lower_bounds")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AffineTransformOps0(*this, tblgen_upper_bounds, "upper_bounds")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AffineTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AffineTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SimplifyBoundedAffineOpsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SimplifyBoundedAffineOpsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(targetRawOperands);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> bounded_valuesOperands;
  ::llvm::SMLoc bounded_valuesOperandsLoc;
  (void)bounded_valuesOperandsLoc;
  ::mlir::DenseI64ArrayAttr lower_boundsAttr;
  ::mlir::DenseI64ArrayAttr upper_boundsAttr;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("with"))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  bounded_valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(bounded_valuesOperands))
    return ::mlir::failure();
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseKeyword("within"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(lower_boundsAttr, ::mlir::Type{}, "lower_bounds",
          result.attributes)) {
    return ::mlir::failure();
  }
  if (parser.parseKeyword("and"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(upper_boundsAttr, ::mlir::Type{}, "upper_bounds",
          result.attributes)) {
    return ::mlir::failure();
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return ::mlir::failure();
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::pdl::OperationType>();
  if (parser.resolveOperands(targetOperands, odsBuildableType0, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(bounded_valuesOperands, odsBuildableType0, bounded_valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SimplifyBoundedAffineOpsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "with";
  _odsPrinter << "[";
  _odsPrinter << getBoundedValues();
  _odsPrinter << "]";
  _odsPrinter << ' ' << "within";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getLowerBoundsAttr());
  _odsPrinter << ' ' << "and";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getUpperBoundsAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("lower_bounds");
  elidedAttrs.push_back("upper_bounds");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SimplifyBoundedAffineOpsOp)


#endif  // GET_OP_CLASSES

