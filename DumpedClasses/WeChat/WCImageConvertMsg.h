//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCImageConvertMsg : NSObject
{
    unsigned int localID;
    NSString *bigPicFilePath;
    NSString *middlePicFilePath;
    NSString *smallPicFilePath;
}

@property(nonatomic) unsigned int localID; // @synthesize localID;
@property(retain, nonatomic) NSString *smallPicFilePath; // @synthesize smallPicFilePath;
@property(retain, nonatomic) NSString *middlePicFilePath; // @synthesize middlePicFilePath;
@property(retain, nonatomic) NSString *bigPicFilePath; // @synthesize bigPicFilePath;
- (void).cxx_destruct;

@end
