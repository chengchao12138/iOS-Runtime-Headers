/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactRelation : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    NSString *_name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)contactRelationWithName:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end
