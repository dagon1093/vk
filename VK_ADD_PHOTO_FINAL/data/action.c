Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("vk.com", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1581082030075\\\"\"},\"use_webpush\":true,\"uaid\":\"3b1f8a3d9e904c429c0dceb073704851\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	lr_start_transaction("1_login");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_submit_data("login.vk.com", 
		"Action=https://login.vk.com/?act=login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=act", "Value=login", ENDITEM, 
		"Name=role", "Value=al_frame", ENDITEM, 
		"Name=expire", "Value=", ENDITEM, 
		"Name=recaptcha", "Value=", ENDITEM, 
		"Name=captcha_sid", "Value=", ENDITEM, 
		"Name=captcha_key", "Value=", ENDITEM, 
		"Name=_origin", "Value=https://vk.com", ENDITEM, 
		"Name=ip_h", "Value=8c3d797b2437271115", ENDITEM, 
		"Name=lg_h", "Value=96e015809a7b9a1df8", ENDITEM, 
		"Name=ul", "Value=", ENDITEM, 
		"Name=email", "Value=dagon1093@gmail.com", ENDITEM, 
		"Name=pass", "Value=P0werofgood", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_comms_key", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("vk.com_2", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_feed.php", 
		"Action=https://vk.com/al_feed.php?queue", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_key", ENDITEM, 
		"Name=ads_section", "Value=false", ENDITEM, 
		"Name=ads_showed", "Value=", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=al_ad", "Value=1", ENDITEM, 
		"Name=need_ignore", "Value=1", ENDITEM, 
		"Name=only_update", "Value=0", ENDITEM, 
		"Name=section", "Value=news", ENDITEM, 
		"Name=subsection", "Value=top", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("al_im.php_2", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=get_promoted_stickers", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php_3", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_comms_key", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("al_im.php_4", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_fast_chat", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=cache_time", "Value=0", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_video.php", 
		"Action=https://vk.com/al_video.php?act=autoplay_stat", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=event", "Value=load", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=post_id", "Value=-137297060_1371652", ENDITEM, 
		"Name=video", "Value=-137297060_456245778", ENDITEM, 
		LAST);

	web_submit_data("al_video.php_2", 
		"Action=https://vk.com/al_video.php?act=show_inline", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=al_ad", "Value=0", ENDITEM, 
		"Name=autoplay", "Value=1", ENDITEM, 
		"Name=from_autoplay", "Value=1", ENDITEM, 
		"Name=list", "Value=bdab0675251955f290", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=post_id", "Value=-116039030_1425880", ENDITEM, 
		"Name=stretch_vertical", "Value=0", ENDITEM, 
		"Name=video", "Value=-116039030_456243507", ENDITEM, 
		LAST);

	web_submit_data("al_video.php_3", 
		"Action=https://vk.com/al_video.php?act=show_inline", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=al_ad", "Value=0", ENDITEM, 
		"Name=autoplay", "Value=1", ENDITEM, 
		"Name=from_autoplay", "Value=1", ENDITEM, 
		"Name=list", "Value=07e7a2488f6fe1d724", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=post_id", "Value=-137297060_1371652", ENDITEM, 
		"Name=stretch_vertical", "Value=0", ENDITEM, 
		"Name=video", "Value=-137297060_456245778", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("notifier.php", 
		"Action=https://vk.com/notifier.php?act=a_reset", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("q_frame.php", 
		"URL=https://queuev4.vk.com/q_frame.php?7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php_5", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_stickers_list", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=cache_time", "Value=0", ENDITEM, 
		"Name=need_keywords", "Value=1", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im717", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077931_631015977", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://vk.com");

	web_submit_data("al_page.php", 
		"Action=https://vk.com/al_page.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=seen", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=data", "Value=-137297060_tf1371652:-1:0:1119764241", ENDITEM, 
		"Name=hash", "Value=c6adf6c162ce588a7d", ENDITEM, 
		"Name=meta", "Value=-137297060_1371652:565.1999816894531:936", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im717_2", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077932_631015978", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_submit_data("al_video.php_4", 
		"Action=https://vk.com/al_video.php?act=autoplay_stat", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=event", "Value=start", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=preloaded", "Value=1", ENDITEM, 
		"Name=start_time", "Value=5772", ENDITEM, 
		"Name=streaming_method", "Value=hls", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("ads_rotate.php", 
		"Action=https://vk.com/ads_rotate.php?act=al_update_ad", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ads_req_id", "Value=1581279169033", ENDITEM, 
		"Name=ads_section", "Value=feed_main", ENDITEM, 
		"Name=ads_showed", "Value=", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=al_ad", "Value=1", ENDITEM, 
		"Name=ignore_experiments", "Value=310000", ENDITEM, 
		"Name=ya_ad_active", "Value=0", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_video.php_5", 
		"Action=https://vk.com/al_video.php?act=video_view_started", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=autoplay", "Value=1", ENDITEM, 
		"Name=hash", "Value=3254e1008fe37501eb29c4cecbc08328", ENDITEM, 
		"Name=inline", "Value=-1", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=oid", "Value=-137297060", ENDITEM, 
		"Name=player_view_type", "Value=inline", ENDITEM, 
		"Name=quality", "Value=2", ENDITEM, 
		"Name=vid", "Value=456245778", ENDITEM, 
		"Name=videocat", "Value=", ENDITEM, 
		LAST);

	web_submit_data("al_video.php_6", 
		"Action=https://vk.com/al_video.php?act=track_player_events", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=events", "Value=[{\"ts\":1581279170,\"video_id\":\"-137297060_456245778\",\"position\":\"start\",\"player_type\":\"inline\",\"ref\":\"feed\",\"volume\":1,\"quality\":480,\"speed\":1,\"e\":\"video_play\",\"autoplay\":1,\"post_id\":\"-137297060_1371652\"}]", ENDITEM, 
		"Name=sig", "Value=1e50a6a8b304050dba_-137297060_456245778_8140717", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://vk.com");

	web_url("nim8140717", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032860&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im717_3", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077933_631015979", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im717_4", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077934_631015980", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im717_5", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077935_631015981", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_submit_data("al_video.php_7", 
		"Action=https://vk.com/al_video.php?act=a_view_segments", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=hash", "Value=2c1b7c537d4935fd53", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=oid", "Value=-137297060", ENDITEM, 
		"Name=prev_s", "Value=", ENDITEM, 
		"Name=prev_sig", "Value=", ENDITEM, 
		"Name=s", "Value=1", ENDITEM, 
		"Name=vid", "Value=456245778", ENDITEM, 
		LAST);

	web_submit_data("al_video.php_8", 
		"Action=https://vk.com/al_video.php?act=track_player_events", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=events", "Value=[{\"ts\":1581279183,\"video_id\":\"-137297060_456245778\",\"position\":\"3s\",\"player_type\":\"inline\",\"ref\":\"feed\",\"volume\":1,\"quality\":240,\"speed\":1,\"e\":\"video_play\",\"autoplay\":1,\"post_id\":\"-137297060_1371652\"}]", ENDITEM, 
		"Name=sig", "Value=1e50a6a8b304050dba_-137297060_456245778_8140717", ENDITEM, 
		LAST);

	web_submit_data("al_video.php_9", 
		"Action=https://vk.com/al_video.php?act=inc_view_counter", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=curr_res", "Value=1", ENDITEM, 
		"Name=hash", "Value=3254e1008fe37501eb29c4cecbc08328", ENDITEM, 
		"Name=max_res", "Value=2", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=oid", "Value=-137297060", ENDITEM, 
		"Name=player", "Value=html5", ENDITEM, 
		"Name=vid", "Value=456245778", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("nim8140717_2", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032862&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im717_6", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077936_631015982", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_url("nim8140717_3", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032863&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_video.php_10", 
		"Action=https://vk.com/al_video.php?act=a_view_segments", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=hash", "Value=2c1b7c537d4935fd53", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=oid", "Value=-137297060", ENDITEM, 
		"Name=prev_s", "Value=1581279184|1581279184|1", ENDITEM, 
		"Name=prev_sig", "Value=0fe134e71ed58b8900", ENDITEM, 
		"Name=s", "Value=2", ENDITEM, 
		"Name=vid", "Value=456245778", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im717_7", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077937_631015983", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_submit_data("al_video.php_11", 
		"Action=https://vk.com/al_video.php?act=track_player_events", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=events", "Value=[{\"ts\":1581279190,\"video_id\":\"-137297060_456245778\",\"position\":\"10s\",\"player_type\":\"inline\",\"ref\":\"feed\",\"volume\":1,\"quality\":360,\"speed\":1,\"e\":\"video_play\",\"autoplay\":1,\"post_id\":\"-137297060_1371652\"}]", ENDITEM, 
		"Name=sig", "Value=1e50a6a8b304050dba_-137297060_456245778_8140717", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im717_8", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077938_631015984", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im717_9", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077939_631015985", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_submit_data("al_video.php_12", 
		"Action=https://vk.com/al_video.php?act=a_view_segments", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=hash", "Value=2c1b7c537d4935fd53", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=oid", "Value=-137297060", ENDITEM, 
		"Name=prev_s", "Value=1581279184|1581279190|2", ENDITEM, 
		"Name=prev_sig", "Value=bcc8e750812af64f50", ENDITEM, 
		"Name=s", "Value=3", ENDITEM, 
		"Name=vid", "Value=456245778", ENDITEM, 
		LAST);

	web_submit_data("al_video.php_13", 
		"Action=https://vk.com/al_video.php?act=track_player_events", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=events", "Value=[{\"ts\":1581279196,\"video_id\":\"-137297060_456245778\",\"position\":25,\"player_type\":\"inline\",\"ref\":\"feed\",\"volume\":1,\"quality\":360,\"speed\":1,\"e\":\"video_play\",\"autoplay\":1,\"post_id\":\"-137297060_1371652\"}]", ENDITEM, 
		"Name=sig", "Value=1e50a6a8b304050dba_-137297060_456245778_8140717", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im717_10", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077940_631015986", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im717_11", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077941_631015987", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_start_transaction("2_goto_album");

	web_submit_data("im717_12", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077942_631015988", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im717_13", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077943_631015989", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("al_photos.php", 
		"URL=https://vk.com/al_photos.php?__query=albums8140717&_ref=left_nav&_rndVer=73887&al=-1&al_id=8140717", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_video.php_14", 
		"Action=https://vk.com/al_video.php?act=a_view_segments", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=hash", "Value=2c1b7c537d4935fd53", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=oid", "Value=-137297060", ENDITEM, 
		"Name=prev_s", "Value=1581279184|1581279196|3", ENDITEM, 
		"Name=prev_sig", "Value=9075fbcc47280abce5", ENDITEM, 
		"Name=s", "Value=4", ENDITEM, 
		"Name=vid", "Value=456245778", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("al_video.php_15", 
		"Action=https://vk.com/al_video.php?act=watch_stat", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=context", "Value=", ENDITEM, 
		"Name=end_stream_reason", "Value=link_click", ENDITEM, 
		"Name=first_frag_loaded", "Value=0.138", ENDITEM, 
		"Name=first_level_loaded", "Value=1.349", ENDITEM, 
		"Name=hash", "Value=1e50a6a8b304050dba", ENDITEM, 
		"Name=hls_candy", "Value=0", ENDITEM, 
		"Name=is_active_live", "Value=0", ENDITEM, 
		"Name=is_autoplay", "Value=1", ENDITEM, 
		"Name=is_hls", "Value=1", ENDITEM, 
		"Name=is_touched", "Value=0", ENDITEM, 
		"Name=last_pos", "Value=21.093174", ENDITEM, 
		"Name=module", "Value=feed", ENDITEM, 
		"Name=played", "Value=20.993174000000003", ENDITEM, 
		"Name=played_ranges", "Value=0-2,2-21", ENDITEM, 
		"Name=post_id", "Value=-137297060_1371652", ENDITEM, 
		"Name=seek_durations", "Value=", ENDITEM, 
		"Name=skip_hls", "Value=0", ENDITEM, 
		"Name=source_link", "Value=https://vk.com/feed", ENDITEM, 
		"Name=stalls_count", "Value=2", ENDITEM, 
		"Name=start_quality", "Value=480", ENDITEM, 
		"Name=start_time", "Value=1581279169", ENDITEM, 
		"Name=started", "Value=2830", ENDITEM, 
		"Name=state_end", "Value=inline_player", ENDITEM, 
		"Name=state_start", "Value=inline_player", ENDITEM, 
		"Name=video", "Value=-137297060_456245778", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://queuev4.vk.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im717_14", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077944_631015990", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_url("nim8140717_4", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032864&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		LAST);

	web_url("nim8140717_5", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032865&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("ads_rotate.php_2", 
		"Action=https://vk.com/ads_rotate.php?act=al_update_ad", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/albums8140717", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=ads_req_id", "Value=1581279205987", ENDITEM, 
		"Name=ads_section", "Value=photos", ENDITEM, 
		"Name=ads_showed", "Value=6_2584999c,4_232fcc17,5_7a06e4a3", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=al_ad", "Value=1", ENDITEM, 
		"Name=ignore_experiments", "Value=310000", ENDITEM, 
		"Name=ya_ad_active", "Value=0", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im717_15", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077945_631015991", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im717_16", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyYuVEjH0EnKctbjDGXMeLInh18IKUlvrUBRbMVxVg0KcYYL1P3AeFCihoePrM_U_c", ENDITEM, 
		"Name=ts", "Value=1111077946_631015992", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_submit_data("upload_fails.php", 
		"Action=https://vk.com/upload_fails.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/albums8140717", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=fail", ENDITEM, 
		"Name=aid", "Value=-7", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=error", "Value=1", ENDITEM, 
		"Name=gid", "Value=0", ENDITEM, 
		"Name=hash", "Value=e4ca130bfacb7195ad4ce6d5731f24d0", ENDITEM, 
		"Name=mid", "Value=8140717", ENDITEM, 
		"Name=oid", "Value=8140717", ENDITEM, 
		"Name=role", "Value=photo", ENDITEM, 
		"Name=server", "Value=512214", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("upload.php", 
		"Action=https://pu.vk.com/c206724/upload.php", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=mid", "Value=8140717", ENDITEM, 
		"Name=aid", "Value=-7", ENDITEM, 
		"Name=gid", "Value=0", ENDITEM, 
		"Name=hash", "Value=1ea993794e73d14e82bdd3ad912f5f15", ENDITEM, 
		"Name=rhash", "Value=e220eaa3866f65b3b31f058b031fe4f8", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=act", "Value=check_upload", ENDITEM, 
		"Name=type", "Value=photo", ENDITEM, 
		"Name=ondone", "Value=Upload.callbacks.oncheck0", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("upload_fails.php_2", 
		"Action=https://vk.com/upload_fails.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/albums8140717", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=success", ENDITEM, 
		"Name=aid", "Value=-7", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=error", "Value=1", ENDITEM, 
		"Name=gid", "Value=0", ENDITEM, 
		"Name=hash", "Value=706101963f02687b4778b621efbad4e2", ENDITEM, 
		"Name=mid", "Value=8140717", ENDITEM, 
		"Name=oid", "Value=8140717", ENDITEM, 
		"Name=server", "Value=206724", ENDITEM, 
		LAST);

	lr_end_transaction("1_login",LR_AUTO);

	lr_end_transaction("2_goto_album",LR_AUTO);

	web_url("nim8140717_6", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032866&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	web_url("nim8140717_7", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032867&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("3_add_photo");

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://queuev4.vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im717_17", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhy", ENDITEM, 
		"Name=ts", "Value=1111077947", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://vk.com");

	web_submit_data("al_photos.php_2", 
		"Action=https://vk.com/al_photos.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/albums8140717", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=start_add", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=hash", "Value=1ca3c5e147031768f2", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("albums8140717", 
		"URL=https://vk.com/albums8140717", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/albums8140717", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_custom_request("upload.php_2", 
		"URL=https://pu.vk.com/c206724/upload.php?act=do_add&aid=-7&ajx=1&gid=0&hash=1ea993794e73d14e82bdd3ad912f5f15&jpeg_quality=89&keep_meta=1&mid=8140717&oid=8140717&rhash=e220eaa3866f65b3b31f058b031fe4f8", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("upload.php_3", 
		"Action=https://pu.vk.com/c206724/upload.php?act=do_add&aid=-7&ajx=1&gid=0&hash=1ea993794e73d14e82bdd3ad912f5f15&jpeg_quality=89&keep_meta=1&mid=8140717&oid=8140717&rhash=e220eaa3866f65b3b31f058b031fe4f8", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=photo", "Value=0000000.png", "File=Yes", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("upload_fails.php_3", 
		"Action=https://vk.com/upload_fails.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/albums8140717", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=stat", ENDITEM, 
		"Name=aid", "Value=-7", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=duration", "Value=3770", ENDITEM, 
		"Name=error", "Value=1", ENDITEM, 
		"Name=gid", "Value=0", ENDITEM, 
		"Name=hash", "Value=706101963f02687b4778b621efbad4e2", ENDITEM, 
		"Name=mid", "Value=8140717", ENDITEM, 
		"Name=oid", "Value=8140717", ENDITEM, 
		"Name=server", "Value=206724", ENDITEM, 
		"Name=total_size", "Value=2100871", ENDITEM, 
		"Name=type", "Value=photo", ENDITEM, 
		LAST);

	web_submit_data("al_photos.php_3", 
		"Action=https://vk.com/al_photos.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/albums8140717", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=done_add", ENDITEM, 
		"Name=aid", "Value=-7", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=context", "Value=1", ENDITEM, 
		"Name=from", "Value=html5", ENDITEM, 
		"Name=geo", "Value=1", ENDITEM, 
		"Name=gid", "Value=0", ENDITEM, 
		"Name=hash", "Value=830a4ca05be64ae2c7b1cb18917e6ddd", ENDITEM, 
		"Name=mid", "Value=8140717", ENDITEM, 
		"Name=photos", "Value=[{\"markers_restarted\":true,\"photo\":\"7bff38a653:w\",\"sizes\":[[\"s\",206724426,\"5ed26\",\"F7RXv4rWmNg\",54,75],[\"m\",206724426,\"5ed27\",\"tzya82xrPu8\",94,130],[\"x\",206724426,\"5ed28\",\"O2VgCndoU-4\",437,604],[\"y\",206724426,\"5ed29\",\"9Y_ugZDoVEU\",584,807],[\"z\",206724426,\"5ed2a\",\"mYAirLvPRTA\",782,1080],[\"w\",206724426,\"5ed2b\",\"u0acIzS5wQE\",1227,1695],[\"o\",206724426,\"5ed2c\",\"14AglOPP4jg\",130,180],[\"p\",206724426,\"5ed2d\",\"-EvNtKCW4KQ\",200,276"
		"],[\"q\",206724426,\"5ed2e\",\"SM1n7TiSTI0\",320,442],[\"r\",206724426,\"5ed2f\",\"fYDPM3iVZWs\",510,704]],\"latitude\":0,\"longitude\":0,\"kid\":\"aab5b14ab2a3db12b2b76d6edced5535\",\"urls\":[\"v206724426/5ed26/F7RXv4rWmNg.jpg\",\"v206724426/5ed27/tzya82xrPu8.jpg\",\"v206724426/5ed28/O2VgCndoU-4.jpg\",\"v206724426/5ed29/9Y_ugZDoVEU.jpg\",\"v206724426/5ed2a/mYAirLvPRTA.jpg\",\"v206724426/5ed2b/u0acIzS5wQE.jpg\",\"v206724426/5ed2c/14AglOPP4jg.jpg\",\"v206724426/5ed2d/-EvNtKCW4KQ.jpg\",\"v206724426/"
		"5ed2e/SM1n7TiSTI0.jpg\",\"v206724426/5ed2f/fYDPM3iVZWs.jpg\"]}]", ENDITEM, 
		"Name=server", "Value=206724", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im717_18", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhy", ENDITEM, 
		"Name=ts", "Value=1111077948", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im717_19", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_release", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyAHOTjaHhSvkGlPJ0IxTS2mrXITsNstsZRLxSKv14Pu9SsdRHQeTh4qTlgLpDtMya", ENDITEM, 
		"Name=ts", "Value=1111077948_310083712", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_url("nim8140717_8", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032868&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_url("nim8140717_9", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032868&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("3_add_photo",LR_AUTO);

	web_url("nim8140717_10", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032869&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		LAST);

	web_url("nim8140717_11", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032870&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_url("nim8140717_12", 
		"URL=https://im.vk.com/nim8140717?act=a_check&key=e6ad5a54f2b5a14d2c49a03e323b2ea97e5048c1&mode=202&ts=1873032871&version=9&wait=25", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("3_logout");

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im717_20", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyAHOTjaHhSvkGlPJ0IxTS2mrXITsNstsZRLxSKv14Pu9SsdRHQeTh4qTlgLpDtMya", ENDITEM, 
		"Name=ts", "Value=1111077949_310083712", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im717_21", 
		"Action=https://queuev4.vk.com/im717", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=8140717", ENDITEM, 
		"Name=key", "Value=6MKD3IHoYTby1Mh7E8QmFeLijxSLPphxv8yym3J8VQ2TnZxtOFdb8bE76QidkVhyAHOTjaHhSvkGlPJ0IxTS2mrXITsNstsZRLxSKv14Pu9SsdRHQeTh4qTlgLpDtMya", ENDITEM, 
		"Name=ts", "Value=1111077950_310083713", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("login.vk.com_2", 
		"URL=https://login.vk.com/?act=logout&hash=a323bd381eaa360359&reason=tn&_origin=https://vk.com", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("3_logout",LR_AUTO);

	return 0;
}