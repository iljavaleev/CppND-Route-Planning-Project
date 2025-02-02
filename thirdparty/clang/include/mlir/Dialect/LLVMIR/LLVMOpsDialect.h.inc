/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace LLVM {

class LLVMDialect : public ::mlir::Dialect {
  explicit LLVMDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~LLVMDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("llvm");
  }

  /// Parse an attribute registered to this dialect.
  ::mlir::Attribute parseAttribute(::mlir::DialectAsmParser &parser,
                                   ::mlir::Type type) const override;

  /// Print an attribute registered to this dialect.
  void printAttribute(::mlir::Attribute attr,
                      ::mlir::DialectAsmPrinter &os) const override;

    /// Provides a hook for verifying dialect attributes attached to the given
    /// op.
    ::mlir::LogicalResult verifyOperationAttribute(
        ::mlir::Operation *op, ::mlir::NamedAttribute attribute) override;

    /// Provides a hook for verifying dialect attributes attached to the given
    /// op's region argument.
    ::mlir::LogicalResult verifyRegionArgAttribute(
        ::mlir::Operation *op, unsigned regionIndex, unsigned argIndex,
        ::mlir::NamedAttribute attribute) override;

    /// Provides a hook for verifying dialect attributes attached to the given
    /// op's region result.
    ::mlir::LogicalResult verifyRegionResultAttribute(
        ::mlir::Operation *op, unsigned regionIndex, unsigned resultIndex,
        ::mlir::NamedAttribute attribute) override;

    /// Name of the data layout attributes.
    static StringRef getDataLayoutAttrName() { return "llvm.data_layout"; }
    static StringRef getAlignAttrName() { return "llvm.align"; }
    static StringRef getNoAliasAttrName() { return "llvm.noalias"; }
    static StringRef getReadonlyAttrName() { return "llvm.readonly"; }
    static StringRef getNoAliasScopesAttrName() { return "noalias_scopes"; }
    static StringRef getAliasScopesAttrName() { return "alias_scopes"; }
    static StringRef getLoopAttrName() { return "llvm.loop"; }
    static StringRef getParallelAccessAttrName() { return "parallel_access"; }
    static StringRef getLoopOptionsAttrName() { return "options"; }
    static StringRef getAccessGroupsAttrName() { return "access_groups"; }
    static StringRef getStructAttrsAttrName() { return "llvm.struct_attrs"; }
    static StringRef getByValAttrName() { return "llvm.byval"; }
    static StringRef getByRefAttrName() { return "llvm.byref"; }
    static StringRef getStructRetAttrName() { return "llvm.sret"; }
    static StringRef getInAllocaAttrName() { return "llvm.inalloca"; }
    static StringRef getNoUndefAttrName() { return "llvm.noundef"; }
    static StringRef getSExtAttrName() { return "llvm.signext"; }
    static StringRef getZExtAttrName() { return "llvm.zeroext"; }
    static StringRef getTBAAAttrName() { return "llvm.tbaa"; }

    /// Verifies if the attribute is a well-formed value for "llvm.struct_attrs"
    static LogicalResult verifyStructAttr(
        Operation *op, Attribute attr, Type annotatedType);

    /// Verifies if the given string is a well-formed data layout descriptor.
    /// Uses `reportError` to report errors.
    static LogicalResult verifyDataLayoutString(
        StringRef descr, llvm::function_ref<void (const Twine &)> reportError);

    /// Name of the target triple attribute.
    static StringRef getTargetTripleAttrName() { return "llvm.target_triple"; }

    /// Name of the C wrapper emission attribute.
    static StringRef getEmitCWrapperAttrName() {
      return "llvm.emit_c_interface";
    }

    /// Returns `true` if the given type is compatible with the LLVM dialect.
    static bool isCompatibleType(Type);

    /// TODO Remove this once there is an alternative way of modeling memory
    /// effects on FunctionOpInterface.
    /// Name of the attribute that will cause the creation of a readnone memory
    /// effect when lowering to the LLVMDialect.
    static StringRef getReadnoneAttrName() {
      return "llvm.readnone";
    }

    Type parseType(DialectAsmParser &p) const override;
    void printType(Type, DialectAsmPrinter &p) const override;

  private:
    /// Register all types.
    void registerTypes();

    /// A cache storing compatible LLVM types that have been verified. This
    /// can save us lots of verification time if there are many occurrences
    /// of some deeply-nested aggregate types in the program.
    ThreadLocalCache<DenseSet<Type>> compatibleTypes;

    /// Register the attributes of this dialect.
    void registerAttributes();
  };
} // namespace LLVM
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::LLVM::LLVMDialect)
