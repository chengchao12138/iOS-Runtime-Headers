/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class <SKProductsRequestDelegate>;

@interface SKProductsRequest : SKRequest  {
    id _productsRequestInternal;
}

@property <SKProductsRequestDelegate> * delegate;


- (void)issueRequestForIdentifier:(id)arg1;
- (BOOL)handleFinishResponse:(id)arg1 returningError:(id*)arg2;
- (id)initWithProductIdentifiers:(id)arg1;
- (id)_newResponseFromDictionary:(id)arg1;
- (id)init;
- (void)dealloc;

@end