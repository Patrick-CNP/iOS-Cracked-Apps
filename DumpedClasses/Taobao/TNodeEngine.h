//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNodeBaseEngine.h"

@class NSMapTable, TNodeJSContext;

@interface TNodeEngine : TNodeBaseEngine
{
    NSMapTable *_nodesMap;
    TNodeJSContext *_context;
}

@property(readonly, nonatomic) TNodeJSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)render:(struct TNodeRenderContext *)arg1 complete:(CDUnknownBlockType)arg2;
- (void)removeNodes:(id)arg1;
- (void)call:(id)arg1 withParams:(id)arg2;
- (void)run;
- (id)getJsTNodeEngine;
- (id)initWithName:(id)arg1 thread:(id)arg2;

@end
