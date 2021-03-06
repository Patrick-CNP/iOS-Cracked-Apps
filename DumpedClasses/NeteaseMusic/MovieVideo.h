//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, AVPlayer, AVURLAsset, NSURL;

@interface MovieVideo : NSObject
{
    _Bool _loaded;
    NSURL *_url;
    int _height;
    int _width;
    _Bool _paused;
    _Bool _flipV;
    _Bool _flipH;
    _Bool _loop;
    _Bool _noSound;
    _Bool _scaleFill;
    _Bool _scale1to1;
    _Bool _scaleStretch;
    unsigned int _pixFormat;
    long long _contentWidth;
    long long _contentHeight;
    double _playTime;
    double _pausedTime;
    double _nominalFrameRate;
    long long _frameCounter;
    AVURLAsset *_asset;
    AVAssetTrack *_videoTrack;
    AVPlayer *_audioPlayer;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_videoTrackOutput;
    unsigned long long _bufWidth;
    unsigned long long _bufHeight;
    unsigned long long _bufRowBytes;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    struct __CVBuffer *_imageBuffer;
    char *_baseAddress;
    _Bool _transparent;
    _Bool _transferFunctionTransparency;
    unsigned int _transferFunctionTransparencyColor;
    unsigned int _transferFunctionTransparencyColorMask;
    _Bool _transferFunctionChromaKey;
    float _transferFunctionChromaKeyHueMinAngle;
    float _transferFunctionChromaKeyHueMaxAngle;
    char *_transferFunctionChromaKeyAlphaTable;
    int _errorCode;
}

@property(readonly, nonatomic) _Bool transparent; // @synthesize transparent=_transparent;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
- (void)setTransparencyByChromaKey:(_Bool)arg1 hueMinAngle:(float)arg2 hueMaxAngle:(float)arg3;
- (_Bool)transparencyByChromaKeyHueMinAngle:(float *)arg1 hueMaxAngle:(float *)arg2;
- (void)setTransparencyByTransparent:(_Bool)arg1 RGBA:(unsigned int)arg2;
- (_Bool)transparencyByTransparentRGBA:(unsigned int *)arg1;
- (void)dealloc;
- (void)stop;
@property(nonatomic, getter=isPaused) _Bool paused;
- (int)PixelFormat;
- (void)dumpFrame;
- (unsigned long long)getHeight;
- (unsigned long long)getWidth;
- (int)getPixelFormat;
- (int)getErrorCode;
- (void)getFrameEnd;
- (char *)getFrameBegin:(double *)arg1;
- (void)play;
- (void)mediaIsReady;
- (void)prerollAsyncWithKeys:(id)arg1;
- (_Bool)start;
- (id)initWithURL:(id)arg1 config:(char *)arg2;

@end

