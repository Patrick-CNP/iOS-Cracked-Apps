//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString, NSURL;

@interface KTVGiftStorageItemVM : NSObject
{
    NSURL *_giftIconUrl;
    NSAttributedString *_giftNameAttr;
    long long _giftId;
    long long _giftNum;
    NSString *_inviteTypeStr;
    NSAttributedString *_overTimeAttr;
}

@property(retain, nonatomic) NSAttributedString *overTimeAttr; // @synthesize overTimeAttr=_overTimeAttr;
@property(retain, nonatomic) NSString *inviteTypeStr; // @synthesize inviteTypeStr=_inviteTypeStr;
@property(nonatomic) long long giftNum; // @synthesize giftNum=_giftNum;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
@property(retain, nonatomic) NSAttributedString *giftNameAttr; // @synthesize giftNameAttr=_giftNameAttr;
@property(retain, nonatomic) NSURL *giftIconUrl; // @synthesize giftIconUrl=_giftIconUrl;
- (void).cxx_destruct;
- (void)configureFrom:(id)arg1;

@end

