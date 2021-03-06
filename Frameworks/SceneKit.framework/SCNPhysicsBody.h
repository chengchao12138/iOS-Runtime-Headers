/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding> {
    BOOL _allowsResting;
    float _angularDamping;
    struct SCNVector4 { 
        float x; 
        float y; 
        float z; 
        float w; 
    } _angularVelocity;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _angularVelocityFactor;
    struct btRigidBody { int (**x1)(); struct btTransform { struct btMatrix3x3 { struct btVector3 { float x_1_3_1[4]; } x_1_2_1[3]; } x_2_1_1; struct btVector3 { float x_2_2_1[4]; } x_2_1_2; } x2; struct btTransform { struct btMatrix3x3 { struct btVector3 { float x_1_3_1[4]; } x_1_2_1[3]; } x_3_1_1; struct btVector3 { float x_2_2_1[4]; } x_3_1_2; } x3; struct btVector3 { float x_4_1_1[4]; } x4; struct btVector3 { float x_5_1_1[4]; } x5; struct btVector3 { float x_6_1_1[4]; } x6; int x7; float x8; struct btBroadphaseProxy {} *x9; struct btCollisionShape {} *x10; void *x11; struct btCollisionShape {} *x12; int x13; int x14; int x15; int x16; float x17; float x18; float x19; float x20; int x21; void *x22; float x23; float x24; float x25; int x26; struct btMatrix3x3 { struct btVector3 { float x_1_2_1[4]; } x_27_1_1[3]; } x27; struct btVector3 { float x_28_1_1[4]; } x28; struct btVector3 { float x_29_1_1[4]; } x29; float x30; struct btVector3 { float x_31_1_1[4]; } x31; struct btVector3 { float x_32_1_1[4]; } x32; struct btVector3 { float x_33_1_1[4]; } x33; struct btVector3 { float x_34_1_1[4]; } x34; struct btVector3 { float x_35_1_1[4]; } x35; struct btVector3 { float x_36_1_1[4]; } x36; float x37; float x38; bool x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; struct btMotionState {} *x47; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x_48_1_1; int x_48_1_2; int x_48_1_3; struct btTypedConstraint {} **x_48_1_4; bool x_48_1_5; } x48; int x49; int x50; struct btVector3 { float x_51_1_1[4]; } x51; struct btVector3 { float x_52_1_1[4]; } x52; struct btVector3 { float x_53_1_1[4]; } x53; struct btVector3 { float x_54_1_1[4]; } x54; struct btVector3 { float x_55_1_1[4]; } x55; struct btVector3 { float x_56_1_1[4]; } x56; int x57; int x58; } *_body;
    unsigned int _categoryBitMask;
    float _charge;
    unsigned int _collisionBitMask;
    unsigned int _contactTestBitMask;
    float _damping;
    BOOL _explicitMomentOfInertia;
    float _friction;
    BOOL _ignoreGravity;
    BOOL _isDefaultShape;
    float _mass;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _momentOfInertia;
    SCNNode *_node;
    SCNPhysicsShape *_physicsShape;
    float _restitution;
    float _rollingFriction;
    int _type;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _velocity;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _velocityFactor;
}

@property (getter=isAffectedByGravity, nonatomic) BOOL affectedByGravity;
@property (nonatomic) BOOL allowsResting;
@property (nonatomic) float angularDamping;
@property (nonatomic) struct SCNVector4 { float x1; float x2; float x3; float x4; } angularVelocity;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } angularVelocityFactor;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) float charge;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (nonatomic) float damping;
@property (nonatomic) float friction;
@property (nonatomic, readonly) BOOL isResting;
@property (nonatomic) float mass;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } momentOfInertia;
@property (nonatomic, retain) SCNPhysicsShape *physicsShape;
@property (nonatomic) float restitution;
@property (nonatomic) float rollingFriction;
@property (nonatomic) int type;
@property (nonatomic) BOOL usesDefaultMomentOfInertia;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } velocity;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } velocityFactor;

+ (id)bodyWithType:(int)arg1 shape:(id)arg2;
+ (id)dynamicBody;
+ (id)kinematicBody;
+ (id)staticBody;
+ (BOOL)supportsSecureCoding;

- (void)_activate;
- (struct btRigidBody { int (**x1)(); struct btTransform { struct btMatrix3x3 { struct btVector3 { float x_1_3_1[4]; } x_1_2_1[3]; } x_2_1_1; struct btVector3 { float x_2_2_1[4]; } x_2_1_2; } x2; struct btTransform { struct btMatrix3x3 { struct btVector3 { float x_1_3_1[4]; } x_1_2_1[3]; } x_3_1_1; struct btVector3 { float x_2_2_1[4]; } x_3_1_2; } x3; struct btVector3 { float x_4_1_1[4]; } x4; struct btVector3 { float x_5_1_1[4]; } x5; struct btVector3 { float x_6_1_1[4]; } x6; int x7; float x8; struct btBroadphaseProxy {} *x9; struct btCollisionShape {} *x10; void *x11; struct btCollisionShape {} *x12; int x13; int x14; int x15; int x16; float x17; float x18; float x19; float x20; int x21; void *x22; float x23; float x24; float x25; int x26; struct btMatrix3x3 { struct btVector3 { float x_1_2_1[4]; } x_27_1_1[3]; } x27; struct btVector3 { float x_28_1_1[4]; } x28; struct btVector3 { float x_29_1_1[4]; } x29; float x30; struct btVector3 { float x_31_1_1[4]; } x31; struct btVector3 { float x_32_1_1[4]; } x32; struct btVector3 { float x_33_1_1[4]; } x33; struct btVector3 { float x_34_1_1[4]; } x34; struct btVector3 { float x_35_1_1[4]; } x35; struct btVector3 { float x_36_1_1[4]; } x36; float x37; float x38; bool x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; struct btMotionState {} *x47; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x_48_1_1; int x_48_1_2; int x_48_1_3; struct btTypedConstraint {} **x_48_1_4; bool x_48_1_5; } x48; int x49; int x50; struct btVector3 { float x_51_1_1[4]; } x51; struct btVector3 { float x_52_1_1[4]; } x52; struct btVector3 { float x_53_1_1[4]; } x53; struct btVector3 { float x_54_1_1[4]; } x54; struct btVector3 { float x_55_1_1[4]; } x55; struct btVector3 { float x_56_1_1[4]; } x56; int x57; int x58; }*)_createBody;
- (void)_didDecodeSCNPhysicsBody:(id)arg1;
- (struct btRigidBody { int (**x1)(); struct btTransform { struct btMatrix3x3 { struct btVector3 { float x_1_3_1[4]; } x_1_2_1[3]; } x_2_1_1; struct btVector3 { float x_2_2_1[4]; } x_2_1_2; } x2; struct btTransform { struct btMatrix3x3 { struct btVector3 { float x_1_3_1[4]; } x_1_2_1[3]; } x_3_1_1; struct btVector3 { float x_2_2_1[4]; } x_3_1_2; } x3; struct btVector3 { float x_4_1_1[4]; } x4; struct btVector3 { float x_5_1_1[4]; } x5; struct btVector3 { float x_6_1_1[4]; } x6; int x7; float x8; struct btBroadphaseProxy {} *x9; struct btCollisionShape {} *x10; void *x11; struct btCollisionShape {} *x12; int x13; int x14; int x15; int x16; float x17; float x18; float x19; float x20; int x21; void *x22; float x23; float x24; float x25; int x26; struct btMatrix3x3 { struct btVector3 { float x_1_2_1[4]; } x_27_1_1[3]; } x27; struct btVector3 { float x_28_1_1[4]; } x28; struct btVector3 { float x_29_1_1[4]; } x29; float x30; struct btVector3 { float x_31_1_1[4]; } x31; struct btVector3 { float x_32_1_1[4]; } x32; struct btVector3 { float x_33_1_1[4]; } x33; struct btVector3 { float x_34_1_1[4]; } x34; struct btVector3 { float x_35_1_1[4]; } x35; struct btVector3 { float x_36_1_1[4]; } x36; float x37; float x38; bool x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; struct btMotionState {} *x47; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x_48_1_1; int x_48_1_2; int x_48_1_3; struct btTypedConstraint {} **x_48_1_4; bool x_48_1_5; } x48; int x49; int x50; struct btVector3 { float x_51_1_1[4]; } x51; struct btVector3 { float x_52_1_1[4]; } x52; struct btVector3 { float x_53_1_1[4]; } x53; struct btVector3 { float x_54_1_1[4]; } x54; struct btVector3 { float x_55_1_1[4]; } x55; struct btVector3 { float x_56_1_1[4]; } x56; int x57; int x58; }*)_handle;
- (id)_owner;
- (void)_removeOwner;
- (void)_setOwner:(id)arg1;
- (struct btCollisionShape { int (**x1)(); int x2; void *x3; }*)_shapeHandleWithShape:(id)arg1 owner:(id)arg2;
- (BOOL)allowsResting;
- (float)angularDamping;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })angularVelocity;
- (struct SCNVector3 { float x1; float x2; float x3; })angularVelocityFactor;
- (void)applyForce:(struct SCNVector3 { float x1; float x2; float x3; })arg1 atPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg2 impulse:(BOOL)arg3;
- (void)applyForce:(struct SCNVector3 { float x1; float x2; float x3; })arg1 impulse:(BOOL)arg2;
- (void)applyTorque:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 impulse:(BOOL)arg2;
- (unsigned int)categoryBitMask;
- (float)charge;
- (void)clearAllForces;
- (unsigned int)collisionBitMask;
- (unsigned int)contactTestBitMask;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)damping;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (float)friction;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 shape:(id)arg2;
- (BOOL)isAffectedByGravity;
- (BOOL)isResting;
- (float)mass;
- (struct SCNVector3 { float x1; float x2; float x3; })momentOfInertia;
- (void)moveToPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)moveToTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (id)physicsShape;
- (void)resetToTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)resetTransform;
- (BOOL)respondsToCollision;
- (float)restitution;
- (float)rollingFriction;
- (void)rotateToAxisAngle:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (struct __C3DScene { }*)sceneRef;
- (void)setAffectedByGravity:(BOOL)arg1;
- (void)setAllowsResting:(BOOL)arg1;
- (void)setAngularDamping:(float)arg1;
- (void)setAngularVelocity:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (void)setAngularVelocityFactor:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setCharge:(float)arg1;
- (void)setCollisionBitMask:(unsigned int)arg1;
- (void)setContactTestBitMask:(unsigned int)arg1;
- (void)setDamping:(float)arg1;
- (void)setFriction:(float)arg1;
- (void)setMass:(float)arg1;
- (void)setMomentOfInertia:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setPhysicsShape:(id)arg1;
- (void)setRestitution:(float)arg1;
- (void)setRollingFriction:(float)arg1;
- (void)setType:(int)arg1;
- (void)setUsesDefaultMomentOfInertia:(BOOL)arg1;
- (void)setVelocity:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setVelocityFactor:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (int)type;
- (BOOL)usesDefaultMomentOfInertia;
- (struct SCNVector3 { float x1; float x2; float x3; })velocity;
- (struct SCNVector3 { float x1; float x2; float x3; })velocityFactor;

@end
