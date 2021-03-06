//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

#import "QQWalletImageDownloaderDelegate.h"

@class NSString, QQWalletBasic, QQWalletDateRange, QQWalletImageDownloader, QQWalletImageSeq;

@interface QQWalletBanner : JceObjectV2 <QQWalletImageDownloaderDelegate>
{
    QQWalletImageDownloader *_downloader;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failedBlock;
}

+ (id)jceType;
- (void).cxx_destruct;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
- (void)downloader:(id)arg1 didDownloadImage:(id)arg2 forURL:(id)arg3;
- (void)requestBannerImageCompletion:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (_Bool)ifDisplayCountdown;
- (_Bool)isInValidDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic, getter=jce_basic, setter=setJce_basic:) QQWalletBasic *jcev2_p_0_o_basic; // @dynamic jcev2_p_0_o_basic;
@property(retain, nonatomic, getter=jce_image, setter=setJce_image:) NSString *jcev2_p_1_o_image; // @dynamic jcev2_p_1_o_image;
@property(retain, nonatomic, getter=jce_range, setter=setJce_range:) QQWalletDateRange *jcev2_p_2_o_range; // @dynamic jcev2_p_2_o_range;
@property(nonatomic, getter=jce_displayCountdown, setter=setJce_displayCountdown:) int jcev2_p_3_o_displayCountdown; // @dynamic jcev2_p_3_o_displayCountdown;
@property(nonatomic, getter=jce_type, setter=setJce_type:) int jcev2_p_4_o_type; // @dynamic jcev2_p_4_o_type;
@property(retain, nonatomic, getter=jce_imageSeq, setter=setJce_imageSeq:) QQWalletImageSeq *jcev2_p_5_o_imageSeq; // @dynamic jcev2_p_5_o_imageSeq;
@property(nonatomic, getter=jce_playWay, setter=setJce_playWay:) int jcev2_p_6_o_playWay; // @dynamic jcev2_p_6_o_playWay;
@property(nonatomic, getter=jce_navBarColor, setter=setJce_navBarColor:) int jcev2_p_7_o_navBarColor; // @dynamic jcev2_p_7_o_navBarColor;
@property(readonly) Class superclass;

@end

