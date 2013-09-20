/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDMovieInfo;

@interface TSDMovieSetValueCommand : TSKCommand <TSDPropagatableCommand> {
    TSDMovieInfo *mMovie;
    int mProperty;
    id mValue;
}

@property(readonly) TSDMovieInfo * movie;
@property(readonly) int property;
@property(readonly) id value;

- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithMovie:(id)arg1 property:(int)arg2 boxedValue:(id)arg3;
- (BOOL)modifiesAnyObjectPassingTest:(id)arg1;
- (id)movie;
- (void)p_do;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)process;
- (int)property;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (void)undo;
- (id)value;

@end