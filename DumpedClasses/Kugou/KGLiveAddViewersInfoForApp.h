//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBasePostInput.h"

@class NSString;

@interface KGLiveAddViewersInfoForApp : FXBasePostInput
{
    long long _concertId;
    long long _concertType;
    NSString *_address;
    NSString *_phoneNum;
    NSString *_userName;
    long long _kugouId;
}

@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) long long concertType; // @synthesize concertType=_concertType;
@property(nonatomic) long long concertId; // @synthesize concertId=_concertId;
- (void).cxx_destruct;

@end

