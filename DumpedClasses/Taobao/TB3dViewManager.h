//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Detail3d, NSString;

@interface TB3dViewManager : NSObject
{
    Detail3d *_detail;
    NSString *_scenePath;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *scenePath; // @synthesize scenePath=_scenePath;
@property(retain, nonatomic) Detail3d *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (id)getT3dView;
- (_Bool)isDetailExist;
- (void)reLoadTb3dDatail:(id)arg1 EnableRotate:(_Bool)arg2 EnableGesture:(_Bool)arg3 Completion:(CDUnknownBlockType)arg4;
- (void)freeTb3dDetail;
- (id)loadTb3dDetailWithScenePath:(id)arg1 EnableAutoRotate:(_Bool)arg2 EnableGesture:(_Bool)arg3 SceneLoadCallBack:(CDUnknownBlockType)arg4;
- (id)init;

@end

