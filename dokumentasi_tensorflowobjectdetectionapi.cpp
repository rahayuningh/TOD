1.	PERSIAPAN DATA
	--------------
	Siapkan data citra (JPG, PNG, JPEG, etc)

	LABELING
	- Buka cmd
	- Buat virtual environment: "python -m venv <ENV_NAME>"
	  Setelah itu akan terbuat folder baru dengan nama <ENV_NAME>
	- Masuk ke folder <ENV_NAME>/Script: "cd <ENV_NAME>/Script"
	- Aktifkan virtual environment: "activate"
	- Install labelImg: "pip install labelImg"
	- Buka labelImg: "labelImg.exe"
	- Buka direktori data citra, dan labeli data. Simpan hasil pelabelan.
	  Hasil pelabelan akan tersimpan dalam bentuk PASCAL_VOC
	  dengan format file ".xml"

	Convert File
	- Ubah file xml ke dalam bentuk file ".csv": 
		"!python xml_to_csv.py --xml_input={XML_PATH}  --output_path={CSV_PATH}"
	
	- Ubah file ".jpg" dan ".csv" ke dalam bentuk tfrecord=".record": 
		"!python generate_tfrecord_from_csv.py --csv_input={CSV_PATH + '/labels.csv'} --output_path={TFRECORD_PATH + '/train.record'} --image_dir={IMAGES_PATH}"

