//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSArray<Optional><FXSPhotoInfo>;

@interface FXSPhotoInfoList : FXBaseJSONModel
{
    int _count;
    NSArray<Optional><FXSPhotoInfo> *_photoInfo;
}

@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSArray<Optional><FXSPhotoInfo> *photoInfo; // @synthesize photoInfo=_photoInfo;
- (void).cxx_destruct;

@end

