/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCWaveformSegmentAccumulator : NSObject <RCWaveformGeneratorSegmentOutputObserver> {
    BOOL _finishedSuccessfully;
    RCWaveformGenerator *_generator;
    NSMutableArray *_segments;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL finishedSuccessfully;
@property (nonatomic, retain) RCWaveformGenerator *generator;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *segments;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)finishedSuccessfully;
- (id)generator;
- (id)initWithWaveformGenerator:(id)arg1;
- (id)segments;
- (void)setGenerator:(id)arg1;
- (void)setSegments:(id)arg1;
- (BOOL)waitUntilFinished;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;

@end
