/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDBorder, NSDate, WDStyle, WDDocument, WDShading;

@interface WDTableProperties : NSObject <NSCopying> {
    WDDocument *mDocument;
    unsigned int mOriginal : 1;
    unsigned int mTracked : 1;
    unsigned int mResolved : 1;
    struct { 
        WDStyle *baseStyle; 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        int justification; 
        int alignment; 
        int width; 
        int widthType; 
        short indent; 
        int indentType; 
        short cellSpacing; 
        int cellSpacingType; 
        int verticalAnchor; 
        int horizontalAnchor; 
        int verticalPosition; 
        int horizontalPosition; 
        int leftDistanceFromText; 
        int topDistanceFromText; 
        int rightDistanceFromText; 
        int bottomDistanceFromText; 
        int deleted; 
        int edited; 
        int formattingChanged; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int baseStyleOverridden : 1; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int justificationOverridden : 1; 
        unsigned int alignmentOverridden : 1; 
        unsigned int widthOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int indentOverridden : 1; 
        unsigned int indentTypeOverridden : 1; 
        unsigned int cellSpacingOverridden : 1; 
        unsigned int cellSpacingTypeOverridden : 1; 
        unsigned int verticalAnchorOverridden : 1; 
        unsigned int horizontalAnchorOverridden : 1; 
        unsigned int verticalPositionOverridden : 1; 
        unsigned int horizontalPositionOverridden : 1; 
        unsigned int leftDistanceFromTextOverridden : 1; 
        unsigned int topDistanceFromTextOverridden : 1; 
        unsigned int rightDistanceFromTextOverridden : 1; 
        unsigned int bottomDistanceFromTextOverridden : 1; 
        unsigned int deletedOverridden : 1; 
        unsigned int editedOverridden : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int indexToAuthorIDOfDeletionOverridden : 1; 
        unsigned int indexToAuthorIDOfEditOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int deletionDateOverridden : 1; 
        unsigned int editDateOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    } mOriginalProperties;
    struct { 
        WDStyle *baseStyle; 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        int justification; 
        int alignment; 
        int width; 
        int widthType; 
        short indent; 
        int indentType; 
        short cellSpacing; 
        int cellSpacingType; 
        int verticalAnchor; 
        int horizontalAnchor; 
        int verticalPosition; 
        int horizontalPosition; 
        int leftDistanceFromText; 
        int topDistanceFromText; 
        int rightDistanceFromText; 
        int bottomDistanceFromText; 
        int deleted; 
        int edited; 
        int formattingChanged; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int baseStyleOverridden : 1; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int justificationOverridden : 1; 
        unsigned int alignmentOverridden : 1; 
        unsigned int widthOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int indentOverridden : 1; 
        unsigned int indentTypeOverridden : 1; 
        unsigned int cellSpacingOverridden : 1; 
        unsigned int cellSpacingTypeOverridden : 1; 
        unsigned int verticalAnchorOverridden : 1; 
        unsigned int horizontalAnchorOverridden : 1; 
        unsigned int verticalPositionOverridden : 1; 
        unsigned int horizontalPositionOverridden : 1; 
        unsigned int leftDistanceFromTextOverridden : 1; 
        unsigned int topDistanceFromTextOverridden : 1; 
        unsigned int rightDistanceFromTextOverridden : 1; 
        unsigned int bottomDistanceFromTextOverridden : 1; 
        unsigned int deletedOverridden : 1; 
        unsigned int editedOverridden : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int indexToAuthorIDOfDeletionOverridden : 1; 
        unsigned int indexToAuthorIDOfEditOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int deletionDateOverridden : 1; 
        unsigned int editDateOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    } mTrackedProperties;
}


- (void)setDeletionDate:(id)arg1;
- (id)deletionDate;
- (void)clearTopBorder;
- (void)clearLeftBorder;
- (void)clearBottomBorder;
- (void)clearRightBorder;
- (void)clearInsideHorizontalBorder;
- (void)clearInsideVerticalBorder;
- (BOOL)isAlignmentOverridden;
- (int)indentType;
- (BOOL)isIndentTypeOverridden;
- (BOOL)isCellSpacingOverridden;
- (int)cellSpacingType;
- (BOOL)isCellSpacingTypeOverridden;
- (long)leftDistanceFromText;
- (BOOL)isLeftDistanceFromTextOverridden;
- (long)topDistanceFromText;
- (BOOL)isTopDistanceFromTextOverridden;
- (long)rightDistanceFromText;
- (BOOL)isRightDistanceFromTextOverridden;
- (long)bottomDistanceFromText;
- (BOOL)isBottomDistanceFromTextOverridden;
- (id)insideHorizontalBorder;
- (BOOL)isInsideHorizontalBorderOverridden;
- (id)insideVerticalBorder;
- (BOOL)isInsideVerticalBorderOverridden;
- (unsigned short)indexToAuthorIDOfDeletion;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (unsigned short)indexToAuthorIDOfEdit;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (BOOL)isDeletionDateOverridden;
- (id)editDate;
- (void)setEditDate:(id)arg1;
- (BOOL)isEditDateOverridden;
- (BOOL)isJustificationOverridden;
- (int)justification;
- (int)deleted;
- (BOOL)isDeletedOverridden;
- (int)edited;
- (BOOL)isEditedOverridden;
- (void)setCellSpacingType:(int)arg1;
- (void)moveOrignalToTracked;
- (void)setIndentType:(int)arg1;
- (void)setLeftDistanceFromText:(long)arg1;
- (void)setTopDistanceFromText:(long)arg1;
- (void)setRightDistanceFromText:(long)arg1;
- (void)setBottomDistanceFromText:(long)arg1;
- (id)mutableInsideHorizontalBorder;
- (id)mutableInsideVerticalBorder;
- (void)setWidthType:(int)arg1;
- (BOOL)isShadingOverridden;
- (id)shading;
- (BOOL)isWidthTypeOverridden;
- (int)widthType;
- (BOOL)isBaseStyleOverridden;
- (BOOL)isTableFloating;
- (BOOL)isVerticalPositionOverridden;
- (long)verticalPosition;
- (BOOL)isVerticalAnchorOverridden;
- (int)verticalAnchor;
- (BOOL)isHorizontalPositionOverridden;
- (long)horizontalPosition;
- (BOOL)isHorizontalAnchorOverridden;
- (int)horizontalAnchor;
- (void)clearShading;
- (id)baseStyle;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setFormattingChangeDate:(id)arg1;
- (BOOL)isTopBorderOverridden;
- (BOOL)isLeftBorderOverridden;
- (BOOL)isBottomBorderOverridden;
- (BOOL)isRightBorderOverridden;
- (BOOL)isFormattingChangedOverridden;
- (int)formattingChanged;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isFormattingChangeDateOverridden;
- (id)formattingChangeDate;
- (id)mutableTopBorder;
- (id)mutableLeftBorder;
- (id)mutableBottomBorder;
- (id)mutableRightBorder;
- (void)setHorizontalAnchor:(int)arg1;
- (void)setVerticalAnchor:(int)arg1;
- (void)setHorizontalPosition:(long)arg1;
- (void)setVerticalPosition:(long)arg1;
- (void)setJustification:(int)arg1;
- (void)setResolveMode:(int)arg1;
- (id)mutableShading;
- (void)setBaseStyle:(id)arg1;
- (void)setEdited:(int)arg1;
- (void)setFormattingChanged:(int)arg1;
- (int)resolveMode;
- (BOOL)isWidthOverridden;
- (void)setDeleted:(int)arg1;
- (BOOL)isIndentOverridden;
- (short)indent;
- (id)leftBorder;
- (id)rightBorder;
- (id)topBorder;
- (id)bottomBorder;
- (void)setIndent:(short)arg1;
- (short)cellSpacing;
- (void)setCellSpacing:(short)arg1;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)setWidth:(long)arg1;
- (long)width;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end