<?php
$nim = readline("Masukkan NIM: ");
$digit = [];
for ($i = 0; $i < strlen($nim); $i++) {
    // Pastikan karakter adalah digit sebelum diubah ke integer
    if (ctype_digit($nim[$i])) {
        $digit[] = (int)$nim[$i];
    }
}

$total = 0;
$maks = 0; 
$minim = 0; 
$rata = 0;
$rev = [];

if (!empty($digit)) {
    
    $maks = $digit[0];
    $minim = $digit[0];
    
    foreach ($digit as $d) {
        
        $total += $d;
        
        
        if ($d > $maks) {
            $maks = $d;
        }
        
    
        if ($d < $minim) {
            $minim = $d;
        }
    }
    
    $rata = $total / count($digit);
    
    for ($i = count($digit) - 1; $i >= 0; $i--) {
        $rev[] = $digit[$i];
    }
}

echo "Digit          : [" . implode(", ", $digit) . "]\n";
echo "Total          : " . $total . "\n";
echo "Maksimum       : " . $maks . "\n";
echo "Minimum        : " . $minim . "\n";
echo "Rata-rata      : " . number_format($rata, 2) . "\n";
echo "Reverse array  : [" . implode(", ", $rev) . "]\n";

?>