//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZMediaJob.h"

@class NSData, NSDictionary, NSString, NSURL, QZExifInfo;

@interface QZMediaPhotoJob : QZMediaJob
{
}

- (_Bool)persistent;

// Remaining properties
@property(copy, nonatomic) NSString *LBSAddress; // @dynamic LBSAddress;
@property(copy, nonatomic) NSString *LBSID; // @dynamic LBSID;
@property(copy, nonatomic) NSString *LBSJumpID; // @dynamic LBSJumpID;
@property(copy, nonatomic) NSString *LBSJumpType; // @dynamic LBSJumpType;
@property(copy, nonatomic) NSString *LBSName; // @dynamic LBSName;
@property(nonatomic) long long LBSShowPoi; // @dynamic LBSShowPoi;
@property(copy, nonatomic) NSString *LBSWeather; // @dynamic LBSWeather;
@property(copy, nonatomic) NSString *albumId; // @dynamic albumId;
@property(copy, nonatomic) NSString *assetIdentifier; // @dynamic assetIdentifier;
@property(retain, nonatomic) NSURL *assetURL; // @dynamic assetURL;
@property(nonatomic) long long compressionBatchID; // @dynamic compressionBatchID;
@property(nonatomic) unsigned long long compressionTime; // @dynamic compressionTime;
@property(retain, nonatomic) QZExifInfo *exifInfo; // @dynamic exifInfo;
@property(retain, nonatomic) NSData *extraData; // @dynamic extraData;
@property(copy, nonatomic) NSString *fakePath; // @dynamic fakePath;
@property(copy, nonatomic) NSString *fileLocalPath; // @dynamic fileLocalPath;
@property(nonatomic) long long fileSize; // @dynamic fileSize;
@property(nonatomic) long long imageHeight; // @dynamic imageHeight;
@property(nonatomic) long long imageQuality; // @dynamic imageQuality;
@property(nonatomic) long long imageRotation; // @dynamic imageRotation;
@property(nonatomic) long long imageWidth; // @dynamic imageWidth;
@property(nonatomic) _Bool isMix; // @dynamic isMix;
@property(copy, nonatomic) NSString *latitude; // @dynamic latitude;
@property(copy, nonatomic) NSString *lloc; // @dynamic lloc;
@property(copy, nonatomic) NSString *longitude; // @dynamic longitude;
@property(copy, nonatomic) NSDictionary *mapExt; // @dynamic mapExt;
@property(copy, nonatomic) NSDictionary *mediaMetadata; // @dynamic mediaMetadata;
@property(nonatomic) _Bool needsFeed; // @dynamic needsFeed;
@property(copy, nonatomic) NSString *photoDescription; // @dynamic photoDescription;
@property(copy, nonatomic) NSDictionary *stExtendInfoMapParams; // @dynamic stExtendInfoMapParams;
@property(copy, nonatomic) NSString *statistics; // @dynamic statistics;
@property(nonatomic) unsigned long long totalPhotoCount; // @dynamic totalPhotoCount;
@property(nonatomic) long long uploadBatchID; // @dynamic uploadBatchID;
@property(nonatomic) long long uploadTimestamp; // @dynamic uploadTimestamp;

@end

