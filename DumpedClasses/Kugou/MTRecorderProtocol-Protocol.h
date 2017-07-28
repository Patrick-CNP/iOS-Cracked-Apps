//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureDevice, NSData, NSString, UIImage, UIView;

@protocol MTRecorderProtocol <NSObject>
- (void)destroy;
- (void)endPreviewBackGround;
- (void)setRecordVolume:(float)arg1;
- (float)recordVolume;
- (void)setPlayVolume:(float)arg1;
- (float)playVolume;
- (void)configRecord;
- (_Bool)isExtendAudioTrackEnabled;
- (void)enableExtendAudioTrack:(_Bool)arg1;
- (int)audioTrackCount;
- (_Bool)isPlaying;
- (void)resumePlayMusic;
- (void)pausePlayMusic;
- (void)stopPlayMusic;
- (void)playmusicwithpath:(NSString *)arg1;
- (UIView *)previewWithRect:(struct CGRect)arg1;
- (void)setKRCinfo:(NSData *)arg1;
- (double)currentTime;
- (double)duration;
- (UIImage *)takeApicturewithRect:(struct CGRect)arg1;
- (void)changeCamera;
- (void)setTorchMode:(long long)arg1;
- (void)stopFramerateTimer;
- (void)startFramerateTimerWithRoomId:(long long)arg1 streamId:(long long)arg2;
- (void)setPlayMessageCallback:(void (^)(int))arg1;
- (void)setLiveMessageCallback:(void (^)(int, int))arg1;
- (void)setCurrentPositon:(long long)arg1;
- (void)setFilterProgress:(double)arg1;
- (float)filterProgress;
- (AVCaptureDevice *)getCurrentDevice;
- (void)setAudioReverb:(int)arg1;
- (void)startPreViewBackGround;
- (void)endRecording;
- (void)setSessionPreset:(NSString *)arg1;
- (void)beginRecordWithLivePath:(NSString *)arg1;
@end
