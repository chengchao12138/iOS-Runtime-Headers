/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic, retain) <SASTTemplateAction> *action;
@property (nonatomic) BOOL centered;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SAUIDecoratedText *decoratedLabel;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SAUILocalImageResource *localImageResource;
@property (readonly) Class superclass;

+ (id)buttonItem;
+ (id)buttonItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (BOOL)centered;
- (id)decoratedLabel;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)localImageResource;
- (void)setAction:(id)arg1;
- (void)setCentered:(BOOL)arg1;
- (void)setDecoratedLabel:(id)arg1;
- (void)setLocalImageResource:(id)arg1;

@end
