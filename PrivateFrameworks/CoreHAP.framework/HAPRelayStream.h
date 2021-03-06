/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayStream : NSObject {
    <HAPStreamDelegate> *_delegate;
    unsigned int _mtu;
}

@property <HAPStreamDelegate> *delegate;
@property (nonatomic, readonly) unsigned int mtu;

- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (unsigned int)mtu;
- (void)open;
- (void)setDelegate:(id)arg1;
- (id)writeData:(id)arg1 error:(id*)arg2;

@end
